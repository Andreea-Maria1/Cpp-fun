Question 1:

Create a class called Orders that ABC store uses to represent an invoice for the items sold at the
store and save the invoice in a text file. Each item (an Orders object) represents id, name, quantity
and price.
a) Write a declaration for the class Orders including its data members and function members based
on the following UML and save it in a file called Orders.h.
Orders
---------------------------------------------------------------
-id: int
-name: string
-quantity: int
-price: double
---------------------------------------------------------------
+Orders()
+Orders(int id, string name, int quantity, double price)
+getId(): int
+getName(): string
+getQuantity(): int
+getPrice(): double
+setID(int i): void
+setName(string n): void
+setQuantity(int q): void
+setPrice(double p): void
+getItemTotal(int, double): double 

---------------------------------------------------------------------------------------------
b) Implement the member functions based on the following descriptions, and save them in a file
called Orders.cpp. (You can create and use other functions as well if you wish.)

- Orders(): default constructor, which will set four attributes id, name, quantity and price
to “-1”, “null”, 1, 0.0.
- Orders(int id, string name, int quantity, double price): second constructor which sets
all the attributes to the passed values.

- getId(): returns the id of the item.
- getName(): returns the name of the item.
- getQuantity(): returns the quantity of the item.
- getPrice(): returns the price of the item.
- setID(int i): sets the id attribute to i.
- setName(string n): sets the name attribute to n.
- setQuantity(int q): sets the quantity attribute to q.
- setPrice(double p): sets the Price attribute to p.
- getItemTotal(int, double): calculates the invoice amount (i.e., multiplies the quantity by
the price for the item), then returns the amount as a double value.
---------------------------------------------------------------------------------------------
c) Write a program name main.cpp that uses the class Orders as follows:
- Create an object Order1 using the default constructor.
- Create object(s) of Orders using the second constructor. For this, prompt the user for the
id, name, quantity and price of the item. Your program should ask user for a new item until
the user enters ‘n’. (Assume the user enters valid input.)
- Write the orders and total price (for all items) in an external text file named Orders.txt
(Figure 1). (Apply 15% TAXRATE to calculate the total price.)
Figure 1: Orders.txt
- After getting all orders and writing to Orders.txt, ask user if (s)he wants to see the details
on console output as well. If yes, display the content of Orders.txt in the output. (see
Figure2 for the first sample output). If No, end the program with a closing message (Figure
3).
-
NOTE: Be sure to save the class declaration in a header file Orders.h, the class implementation in
Orders.cpp file and driver program in main.cpp. Don’t forget to include these files in the project. 
