1.Create a SQL script to insert a new order into an Orders table, then use COMMIT to 
save the transaction and verify that the new order 
persists after reconnecting to the database.

    START TRANSACTION;

    INSERT INTO Orders (OrderID, CustomerID, OrderDate, TotalAmount, Status)
    VALUES (101, 1, CURRENT_TIMESTAMP, 499.00, 'Completed');

    COMMIT;

    SELECT * FROM Orders WHERE OrderID = 101;

2.Simulate a Zomato-style food order process: insert two new items into an OrderItems 
table, then use ROLLBACK to undo the changes before committing. Check that no new 
items remain in the table after rollback.

    START TRANSACTION;

    INSERT INTO OrderItems (OrderItemID, OrderID, ItemName, Quantity, Price)
    VALUES 
    (201, 101, 'Paneer Butter Masala', 1, 320.00),
    (202, 101, 'Butter Naan', 2, 80.00);

    ROLLBACK;

    SELECT * FROM OrderItems WHERE OrderID = 101;

3.In a Flipkart-like shopping cart scenario, use SAVEPOINT to mark a point after 
adding a product to the Cart table, add another product, then use ROLLBACK TO SAVEPOINT 
to undo only the last addition. Show the final contents of the Cart table.

    START TRANSACTION;

    INSERT INTO Cart (CartID, UserID, ProductID, Quantity, Price)
    VALUES (1, 501, 1001, 1, 12999.00);

    SAVEPOINT FirstItemAdded;

    INSERT INTO Cart (CartID, UserID, ProductID, Quantity, Price)
    VALUES (2, 501, 1002, 1, 499.00);

    ROLLBACK TO SAVEPOINT FirstItemAdded;

    COMMIT;

    SELECT * FROM Cart WHERE UserID = 501;

4.Write a trigger on a Wallet table that automatically deducts the purchase amount 
from the user's balance whenever a new transaction is inserted, similar to how Paytm 
    updates wallet balance after a payment.'

        CREATE TRIGGER trg_UpdateBalanceBuggy
        AFTER INSERT ON Expenses
        FOR EACH ROW
        BEGIN
            UPDATE Wallet
            SET Balance = Balance + NEW.Amount
            WHERE UserID = NEW.UserID;
        END;

5.Use ChatGPT to generate a SQL test scenario where a trigger incorrectly updates a 
user's balance after an expense entry. Paste the scenario and your corrected trigger 
code, explaining how you fixed the error.<br><br><em><strong>Hint:</strong> 
Ask ChatGPT for a buggy trigger example and a test case that exposes the bug.</em>'

    --Buggy Trigger Code:
    CREATE TRIGGER trg_UpdateBalanceBuggy
    AFTER INSERT ON Expenses
    FOR EACH ROW
    BEGIN
        UPDATE Wallet
        SET Balance = Balance + NEW.Amount
        WHERE UserID = NEW.UserID;
    END;

    --Corrected Trigger Code:
        DELIMITER //

    CREATE TRIGGER trg_UpdateBalanceCorrected
    AFTER INSERT ON Expenses
    FOR EACH ROW
    BEGIN
        UPDATE Wallet
        SET Balance = Balance - NEW.Amount
        WHERE UserID = NEW.UserID;
    END;
    //

    DELIMITER ;