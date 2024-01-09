index.html


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>To-Do App</title>
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
</head>
<body>
    <div class="container my-3">
        <h1>To-Do App</h1>
            <div class="card">
                <div class="card-body">
                    <h5 class="card-title">Write Some Note</h5>
                        <div class="form-group">
                            <textarea class="form-control" id="addTxt" rows="3"></textarea>
                        </div>
                        <button class="btn btn-primary" id="addBtn">ADD NOTE</button>
                </div>
            </div>
            <hr>
            <h1>Your Notes</h1>
            <hr>
            <div id="notes" class="row container-fluid"> 
            </div>
    </div>
    <script src="script.js"></script>
</body>
</html>



script.js

showNotes();
// If user adds a note, add it to the localStorage
let addBtn = document.getElementById("addBtn");
addBtn.addEventListener("click", function(e) {
let addTxt = document.getElementById("addTxt");
let notes = localStorage.getItem("notes");
if (notes == null) {
notesObj = [];
} else {
notesObj = JSON.parse(notes);
}
notesObj.push(addTxt.value);
localStorage.setItem("notes", JSON.stringify(notesObj));
addTxt.value = "";
showNotes();
});
// Function to show elements from localStorage
function showNotes() {
let notes = localStorage.getItem("notes");
if (notes == null) {
notesObj = [];
} else {
notesObj = JSON.parse(notes);
}
let html = "";
notesObj.forEach(function(element, index) {
html += `
<div class="noteCard my-2 mx-2 card" style="width: 18rem;">
<div class="card-body">
<h5 class="card-title">Note ${index + 1}</h5>
<p class="card-text"> ${element}</p>
<button id="${index}"onclick="deleteNote(this.id)" class="btn 
btn-primary">Delete Note</button>
</div>
</div>`;
});
let notesElm = document.getElementById("notes");
if (notesObj.length != 0) {
notesElm.innerHTML = html;
} else {
notesElm.innerHTML = `NO Notes To Show. Add some note and CLICK on 
"ADD NOTE" `;
}
}
// Function to delete a note
function deleteNote(index) {
let notes = localStorage.getItem("notes");
if (notes == null) {
notesObj = [];
} else {
notesObj = JSON.parse(notes);
}
notesObj.splice(index, 1);
localStorage.setItem("notes", JSON.stringify(notesObj));
showNotes();
}




style.css

body {
    background-color: black;
    font-family: Serif;
    display: flex;
    flex-wrap: wrap;
    margin: 0;
    padding-top: 3rem;
    }
    .card-body
    {
    background-color: rgb(5, 179, 179);
    }
    
