HTML


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login Page</title>
</head>
<body>
    <h1>Login Page</h1>
    <form id="loginForm">
        <label for="username">Username:</label>
        <input type="text" id="username" name="username" required><br><br>
        
        <label for="password">Password:</label>
        <input type="password" id="password" name="password" required><br><br>
        
        <button type="submit">Login</button>
    </form>
    
    <p id="message"></p>
    
    <script src="script.js"></script>
</body>
</html>





JS




// Sample user credentials for demonstration purposes
const users = [
    { username: 'user1', password: 'password1' },
    { username: 'user2', password: 'password2' }
];

document.getElementById('loginForm').addEventListener('submit', function (event) {
    event.preventDefault(); // Prevent the form from submitting

    // Get the entered username and password
    const enteredUsername = document.getElementById('username').value;
    const enteredPassword = document.getElementById('password').value;

    // Check if the entered credentials match any user
    const user = users.find(user => user.username === enteredUsername && user.password === enteredPassword);

    if (user) {
        // Successful login
        document.getElementById('message').textContent = 'Login successful. Redirecting...';

        // You can add code to redirect to another page or perform other actions here
    } else {
        // Failed login
        document.getElementById('message').textContent = 'Login failed. Please check your credentials.';
    }
});
