#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>


using namespace std;
//------------------------------------------

// Assignment 2

//------------------------------------------

//This is a list of the declarations of function calls and values that are used within functions found throughout the code.
//It makes the code more readable and cleaner, as well as it avoids making double declarations.
//The functions declared here makes it easier to identify later on in the code.
//Even though declaring variables outside of functions should not be allowed, many of these variables are used in multiple functions.
//Thus, making the code more readable as the variables don't need to be declared every function or in int main.
int choice;
int NumberOfChoice;
int pts;
char answer;
double totalprice;
double getPencilPrice();
double getEraserPrice();
double getPaperPrice();
double getNotebookPrice();
double getSharpenerPrice();

//------------------------------------------------------------------------
//This function is a void function as we don't need to return any value.
//Our goal is to only display the welcome banner for the user.
//\n is used to jump to the next line and \t is to create an indent.
void displayHeader()
{
cout << "*******************************************************\n \tWelcom to XYZ Office Supplies Program!\n *******************************************************" << endl;
cout << "\n";
}

//------------------------------------------------------------------------
//Again, this function is a void function as we don't need to return any value.
//The goal is to display the menu from which the user will choose its items when shopping.
//\n is used to jump to the next line and \t is to create an indent (when there is a double \t it just adds another indent).
void displayMenu()
{
cout << "Here is the list of items:\n";
cout << "\t  Item \t\t    Price (per box)\n";
cout << "\t------------------------------------\n";
cout << "\t1 - Pencil \t\t$19.99\n\t2 - Eraser \t\t$24.99\n\t3 - Paper \t\t$12.99\n\t4 - Notebook \t\t$49.99\n\t5 - Pencil Sharpener \t$29.99\n\t6 - Quit" << endl;
cout << "*******************************************************\n";
}

//------------------------------------------------------------------------
//The first function is to store the number choice the user will make when selecting the item.
//Indeed, the new value NumberOfChoice is to keep the good value based off the if statements.
//Thus, the function will lastly return the result so it can be stored in a variable.
//Then, the function can be used in another stage of the next functions like function calls.
//In this case, when the choice is between 1 (or equal) and 5 it will be stored for when the variable is called in another function.
//When user inputs 6 it will store the value and in the next function "void processMenuChoice" and exit the loop going out of the function call to the last cout statement.
//If user inputs a number higher than 6, the while loop will ask the user to input a valid number until it is inputed.

int getChoice()
{

cout << "Please enter the item number: ";
cin >> choice;

if ((choice >= 1) && (choice <= 6))
{
    NumberOfChoice = choice;
}
else
{
    while ((choice < 1) || (choice > 6))
{
    cout << "Invalid choice!!! Try again: ";
    cin >> choice;
}

NumberOfChoice = choice;

}
   return NumberOfChoice;
}

//------------------------------------------------------------------
//NumberOfChoice is the number the user inputed that was kept in the system.
//This if statement is to restrain the system from continuing the loop when user inputs the number 6.
//As mentioned earlier, in the displayed choices 6 is used to quit the program and display the goodbye message.
//Indeed, as long as user does not input 6 the do while loop will be commenced.
//This function will not return anything in the function call.
//However, it will have a passing by reference "totalprice" which will be passing the initial value and variable in other calling functions.
//Additionally, we have an integer value which can be invoke in any function call.
//Totalprice += is like saying totalprice = totalprice + the total of the items which are recalled as functions.

void processMenuChoice(int choice, double&totalprice)
{

if (NumberOfChoice != 6)

do{
    if (choice == 1)
    {
        cout << "Pencil. ";
        totalprice += getPencilPrice();
    }

    else if (choice == 2)
    {
        cout << "Eraser. ";
        totalprice += getEraserPrice();

    }

    else if (choice == 3)
    {
        cout << "Paper. ";
        totalprice += getPaperPrice();

    }

    else if (choice == 4)
    {
        cout << "Notebook. ";
        totalprice += getNotebookPrice();

    }

    else if (choice ==5)
    {
        cout << "Pencil Sharpener. ";
        totalprice += getSharpenerPrice();

    }

cout << "Please enter the item number: ";
cin >> choice;

}while (choice != 6);

//exit(0); would not be a good thing to use as it somewhat terminates the program
}

//------------------------------------------------------------------
//The functions will calculate the total price for each item.
//As previously recalled in the "void processMenuChoice" the total will be returned in order to calculate the totalprice.
//Each item has different prices but they all have the same body.
//For instance, when running the program, after user enters a choice of item, it will print the cout statement in "void processMenuChoice".
//Then, the cout statement for the associated function in ex : double getPencilPrice and ask user to input the number of boxes.
//note: all these function will be recalled in the function calls in intmain later in the code, that is when the code will run.

double getPencilPrice()

{
    int NumBox;
    cout << "How many (box(es)) do you want? ";
    cin >> NumBox;
    cout << "\n";

    double Pencil = 19.99;
    double PencilTotal = NumBox * Pencil;
    return PencilTotal;
}

double getEraserPrice()
{
    int NumBox;
    cout << "How many (box(es)) do you want? ";
    cin >> NumBox;
    cout << "\n";

    double Eraser = 24.99;
    double EraserTotal = NumBox * Eraser;
    return EraserTotal;
}

double getPaperPrice()
{
    int NumBox;
    cout << "How many (box(es)) do you want? ";
    cin >> NumBox;
    cout << "\n";

    double Paper = 12.99;
    double PaperTotal = NumBox * Paper;
    return PaperTotal;
}

double getNotebookPrice()

{
    int NumBox;
    cout << "How many (box(es)) do you want? ";
    cin >> NumBox;
    cout << "\n";

    double Notebook = 49.99;
    double NotebookTotal = NumBox * Notebook;
    return NotebookTotal;
}

double getSharpenerPrice()

{
    int NumBox;
    cout << "How many (box(es)) do you want? ";
    cin >> NumBox;
    cout << "\n";

    double Sharpener = 29.99;
    double SharpenerTotal = NumBox * Sharpener;
    return SharpenerTotal;
}

//------------------------------------------------------------------
//The totalprice that was stored is now passed by as a reference and as a value in this function.
//This will permit the function to analyze the value through these if and else if statements.
//The value after this process will be, again, passed by in the function "void displayResults" (in the function calls).
//There is no return as it is a void function.

void getTotalPrice(double&totalprice)
{

    if (totalprice < 100)
    {
        totalprice = totalprice * 95/100;
    }
    else if (totalprice >= 100 && totalprice < 200)
    {
        totalprice = totalprice * 90/100;
    }

    else if (totalprice >=200)
    {
        totalprice = totalprice * 85/100;
    }

}

//------------------------------------------------------------------
//This function will calculate the number of points when being a member.
//The totalprice will not be passed by as a reference and value as it stays the same as it was left last function.
//Firstly, we need to know what is the answer from the user: do they have a membership or not.
//The points (pts) will be changed during the process which is why we need to put them as pass by reference/ value for next functions/ function calls.
//If the user enters anything else but 'Y' or 'y', it will go to else which is zero points.

void getPoints(double totalprice, int&pts, char answer)
{

if ((answer == 'Y') || (answer == 'y'))
{
    if (totalprice < 200)
    {
       pts = ceil(2 * totalprice);
    }


    else if (totalprice >= 200)
    {
       pts = ceil(3 * totalprice);
    }


else
        pts = 0;
}
}
//------------------------------------------------------------------
//The integer value pts (points) which has been stored from last function call will be printed out in this function call.
//Here the switch statement is used. When user enters y or Y it will print the totalprice from "void getTotalPrice" with its discount.
//Then, it breaks out of loop to display the final message.
//On the contrary, when user inputs N or n, it will print the total price from "void getTotalPrice" with its discount, from the appropriate else statement.
//Then, the loop finishes and will print the last cout message.

void displayResult(double totalprice, int pts, char answer)
{
cout << "The total price is $" << setprecision(2)<<fixed << totalprice << "." << endl;
{
	switch (answer)
	case 'Y':
    case 'y':
    {
		cout << "You will receive " << pts << " points." << endl;
        break;

    case 'N':
    case 'n':

		cout << "You will receive " << pts << " points." << endl;
    }

}

}
//------------------------------------------------------------------
//This is the most important part of the code.
//Mainly because without the function called in int main, nothing will print.
//The functions call will print in order and perform all the operations with its defined inputs, outputs and parameters.
//The function calls in int main will perform the actions connected to their functions created before this point of the code.

int main()
{

double totalprice = 0;
displayHeader();
displayMenu();


cout << "Do you have a membership? (Y/N)? ";
cin >> answer;
cout << "\n";


getChoice();
processMenuChoice(choice, totalprice);
getTotalPrice(totalprice);
getPoints(totalprice, pts, answer);
displayResult(totalprice, pts, answer);

cout << "\n";
cout << "Thank you for using XYZ Price Calculator Program!" << endl;


return 0;
}
