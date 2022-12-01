# Cpp-fun
projets de c++ 


Question1:

Write a C++ program using nested selection statement(s) and a while loop that takes user input a
word (string) and generates an encrypted password based on the following conversion:
 If the character being analyzed is a digit, concatenate the digit character to the new string.
 If the character is a lower-case letter, concatenate the corresponding character to the new
string as listed in the table below.
 If the character being analyzed is anything other than a lower-case letter or digit,
concatenate an asterisk (*) for that character. 

Question2:

XYZ Company needs you to implement a calculator program for the office supplies sales, to help
the customer order items and pay the total price.
Here are the details of promotions on XYZ website:
- If you buy items under $100, you will receive 5% and get double points.
- If you buy items between $100-200 (100 included), you will receive 10% off and get double
points.
- If you buy items over $200 (200 included), you will receive 15% off in total and get triple
points. 

Question3:

The program prompts the user to the choice based on the item list and validates the information.
Here is a list of the functions you are required to create (as per specification) and use to solve this
problem. You can create and use others functions as well if you wish.

1. Function Name: displayHeader()
  • Parameters: None
  • Return: none
  • Purpose: This function will display the welcome banner.
2. Function Name: displayMenu ()
  • Parameters: None.
  • Return: none
  • Purpose: This function displays the menu to the user.
3. Function Name: getChoice ()
  • Parameters: None.
  • Return: the valid choice from user
  • Purpose: This function prompts the user for a valid menu choice. It will continue
  prompting until a valid choice has been entered.
4. Function Name: processMenuChoice ()
  • Parameters: The variable that holds the menu choice entered by the user, passing by value;
  the variables that holds the total price passing by reference.
  • Return: none 
• Purpose: This function will call the appropriate function based on the menu choice that is
passed.
5. Function Name: getPencilPrice ()
• Parameters: None
• Return: the total pencil price
• Purpose: This function asks the user’s input of pencil quantities. The function calculates
the total pencil price, which are added to the price created in main.
6. Function Name: getEraserPrice ()
• Parameters: None
• Return: the total eraser price
• Purpose: This function asks the user’s input of eraser quantities. The function calculates
the total eraser price, which are added to the price created in main.
7. Function Name: getPaperPrice ()
• Parameters: None
• Return: the total paper price
• Purpose: This function asks the user’s input of paper quantities. The function calculates
the total paper price, which are added to the price created in main.
8. Function Name: getNotebookPrice ()
• Parameters: None
• Return: The total notebook price
• Purpose: This function asks the user’s input of notebook quantities. The function
calculates the total notebook price, which are added to the price created in main.
9. Function Name: getPSharpenerPrice ()
• Parameters: None
• Return: the total pencil sharpener price
• Purpose: This function asks the user’s input of sharpener quantities. The function
calculates the total sharpener price, which are added to the price created in main.
10. Function Name: getTotalPrice()
• Parameters: The variables that hold the total price in main, passing by reference.
• Return: none
• Purpose: This function calculates the total price of the items that the customer bought.
11. Function Name: getPoints()
• Parameters: The variables that hold the points in main, passing by reference; member
status and the total price passing by value
• Return: None
• Purpose: This function calculates the points that the customer will receive.
• The total points will be displayed only for members (please see Note2) and it will be an
integer which is rounded up.
Double points = 2*total price, triple points = 3*total price. 
12. Function Name: displayResult()
• Parameters: The variables that hold the total price and points in main, passing by value.
• Return: none
• Purpose: This function displays the total amount to be paid and the points to receive.
Note1: The price to record the total price saves two digits after decimal.
Note2: The total points will be displayed only for members. So your program should ask user if
he/she has a membership or not. Total points will be an integer which is rounded up (Hint you can
use Math.ceil())
Note3: Your program must display the same information but the output can be formatted
differently.
Following are some sample screen shots to illustrate the expected behavior of your program. User
input at the keyboard is marked with a red circle . 




