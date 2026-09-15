1.Write a PL/SQL block that declares two variables: one for a user's name (VARCHAR2) 
and one for their age (NUMBER). Assign values and print both using DBMS_OUTPUT.PUT_LINE.'

DECLARE
    v_user_name VARCHAR2(50) := 'Alex Smith';
    v_user_age  NUMBER := 28;
BEGIN
    DBMS_OUTPUT.PUT_LINE('Name: ' || v_user_name);
    DBMS_OUTPUT.PUT_LINE('Age: '  || v_user_age);
END;
/

2.Create a PL/SQL block that uses an IF statement to check if a given order amount is 
above 500. If yes, print 'Eligible for free delivery', else print 'Delivery charges apply'.

DECLARE
    v_order_amount NUMBER := 650; 
BEGIN
    IF v_order_amount > 500 THEN
        DBMS_OUTPUT.PUT_LINE('Eligible for free delivery');
    ELSE
        DBMS_OUTPUT.PUT_LINE('Delivery charges apply');
    END IF;
END;
/

3.Write a PL/SQL block that uses a simple LOOP to print the numbers 1 to 5 using 
DBMS_OUTPUT.PUT_LINE.<br><br><em><strong>Hint:</strong> Use a counter variable 
and EXIT WHEN condition inside the loop.</em>

DECLARE
    v_counter NUMBER := 1;
BEGIN
    LOOP
        DBMS_OUTPUT.PUT_LINE(v_counter);
        v_counter := v_counter + 1;
        
        EXIT WHEN v_counter > 5;
    END LOOP;
END;
/

4.Declare a cursor in PL/SQL to select all product names from a table called PRODUCTS. 
Fetch each product name and print it using DBMS_OUTPUT.PUT_LINE.<br><br><em><strong>
Hint:</strong> Assume the PRODUCTS table has a column PRODUCT_NAME.</em>

DECLARE
    CURSOR c_products IS
        SELECT product_name 
        FROM products;
        
    v_product_name products.product_name%TYPE;
BEGIN
    OPEN c_products;
    LOOP
        FETCH c_products INTO v_product_name;
        EXIT WHEN c_products%NOTFOUND;
        
        DBMS_OUTPUT.PUT_LINE('Product: ' || v_product_name);
    END LOOP;
    CLOSE c_products;
END;
/

5.Write a PL/SQL block that tries to divide two numbers entered as variables. 
If a division by zero occurs, catch the exception and print 'Cannot divide by zero'. 
Otherwise, print the result.

DECLARE
    v_num1   NUMBER := 10;
    v_num2   NUMBER := 0; -- Set to non-zero to test successful division
    v_result NUMBER;
BEGIN
    v_result := v_num1 / v_num2;
    DBMS_OUTPUT.PUT_LINE('Result: ' || v_result);
EXCEPTION
    WHEN ZERO_DIVIDE THEN
        DBMS_OUTPUT.PUT_LINE('Cannot divide by zero');
END;
/