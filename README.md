# Hotel
<!DOCTYPE html>
<html>
<head>
    <title>Бронирование отелей</title>
</head>
<body>
    <h1>Бронирование отелей</h1>

    <form action="booking.php" method="post">
        <label for="check-in-date">Дата заселения:</label>
        <input type="date" id="check-in-date" name="check-in-date">
        <br><br>
        
        <label for="check-out-date">Дата выселения:</label>
        <input type="date" id="check-out-date" name="check-out-date">
        <br><br>
        
        <input type="submit" value="Забронировать">
    </form>
</body>
</html>
