HTML



<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Temperature-Converter</title>
    <link rel="stylesheet" href="style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css" />
</head>
<body>
    <div class="container">
        <div class="title">
            <h1>Temperature Converter <span class="temp-icon"><i class="fa-solid fa-temperature-half"></i></span></h1>
        </div>
        <div id="Cel">
            <input type="number" placeholder="Celsius" id="celsius" oninput="CelToFar()">
            <span class="icon">&#8451</span>
        </div>
        <div id="Fah">
            <input type="number" placeholder="Fahrenheit" id="fahrenheit" oninput="FarToCel()">
            <span class="icon">&#8457</span>
        </div>
        <div class="button">
            <button onclick="reset()" id="button">Clear All</button>
        </div>
    </div>

    <script src="App.js"></script>

</body>
</html>



CSS




<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Temperature-Converter</title>
    <link rel="stylesheet" href="style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css" />
</head>
<body>
    <div class="container">
        <div class="title">
            <h1>Temperature Converter <span class="temp-icon"><i class="fa-solid fa-temperature-half"></i></span></h1>
        </div>
        <div id="Cel">
            <input type="number" placeholder="Celsius" id="celsius" oninput="CelToFar()">
            <span class="icon">&#8451</span>
        </div>
        <div id="Fah">
            <input type="number" placeholder="Fahrenheit" id="fahrenheit" oninput="FarToCel()">
            <span class="icon">&#8457</span>
        </div>
        <div class="button">
            <button onclick="reset()" id="button">Clear All</button>
        </div>
    </div>

    <script src="App.js"></script>

</body>
</html>





JS






let celsius=document.getElementById("celsius");
let fahrenheit=document.getElementById("fahrenheit");

function CelToFar()
{
    let result =(parseFloat(celsius.value)*9/5)+32;
    fahrenheit.value=parseFloat(result.toFixed(2));
    console.log(result); //for terminal 
}

function FarToCel()
{
    let result =(parseFloat(fahrenheit.value)-32)*5/9;
    celsius.value=parseFloat(result.toFixed(2));
    console.log(result); //for terminal
}

let button=document.getElementById("button");

button.addEventListener('click',()=>{
    celsius.value='';
    fahrenheit.value='';
})
