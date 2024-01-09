HTML


<!DOCTYPE html>
<html>
<head>
    <title>Pizza Delivery</title>
</head>
<body>
    <h1>Pizza Order Form</h1>
    <form action="submit_order.php" method="post">
        <label for="pizza-size">Select Pizza Size:</label>
        <select name="pizza-size" id="pizza-size">
            <option value="small">Small</option>
            <option value="medium">Medium</option>
            <option value="large">Large</option>
        </select>
        <br>

        <label for="toppings">Choose Toppings (Select multiple by holding Ctrl or Command key):</label>
        <select name="toppings[]" id="toppings" multiple>
            <option value="pepperoni">Pepperoni</option>
            <option value="mushrooms">Mushrooms</option>
            <option value="onions">Onions</option>
            <option value="olives">Olives</option>
        </select>
        <br>

        <label for="delivery-address">Delivery Address:</label>
        <textarea name="delivery-address" id="delivery-address" rows="4" cols="50"></textarea>
        <br>

        <label for="phone-number">Phone Number:</label>
        <input type="text" name="phone-number" id="phone-number">
        <br>

        <input type="submit" value="Place Order">
    </form>
</body>
</html>
