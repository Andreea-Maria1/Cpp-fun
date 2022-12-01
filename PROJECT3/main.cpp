#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Orders.h" 
using namespace std;
//------------------------------------------

//Project3

//------------------------------------------

//Initializing the size of the array which will allow user to input multiple times the number of items it wants.
const int SIZE = 40;

int main()
{
    //members in which we have stored variables/values.
    int id;
    string name;
    int quantity;
    double price;
    char selection ='y', ch;
    double totalPrice = 0;

//This is to open a file in order to write the information inputed.
//Note: The file will not yet write anything as long as "fout <<" is not initiated.
    ofstream fout;
    fout.open("Orders.txt");

//This is the display of the welcome message.
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout << " \tWelcome to ABC order System\n";
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout << " \n";

//Creation of the object Order1 with the default constructor.
    Orders Order1;

//First message written in the Orders.txt file.
    cout << "\n";
    fout << "ID" << setw(10) << "Name" << setw(15) << "Quantity" << setw(10) << "Price" << endl;
    fout << "=================================\n";

//This loop will allow the user to input all the information required multiple times.
//Indeed, if the user wants to input another item, the loop will restart from the toop.
//Then, i++ will increment i for each time it does the loop, which will increase the number of objects.
//Rather than writing numerous objects like Order2, Order3, etc., this loop makes counting multiple objects easier.
//Setw was used to display the spaces between the members printed in the file Orders.txt.
//Then the total price is computed when we recall the function getItemTotal and object.
//Finally, if user enter 'n' the loop will break and jump outside of loop.

    for (int i = 0; i < SIZE; i++)
    {
        while (selection == 'y' || selection == 'Y')
        {
            cout << "Enter item ID: ";
            cin >> id;

            cout << "Enter item Name: ";
            cin >> name;

            cout << "Enter quantity: ";
            cin >> quantity;

            cout << "Enter price: ";
            cin >> price;

            Orders Order1(id, name, quantity, price);
            totalPrice += Order1.getItemTotal(quantity, price);


            fout << "00" << setw(6) << left<< id << setw(14)<< left << name << setw(10)<< left << quantity << left << price << endl;

            cout << "\n";
            cout << "Do you want to add another item? (y or n): ";
            cin >> selection;

            if (selection == 'n' || selection == 'N')
                break;
            cout << "\n";

        }
    }

//Total price with taxes
//the total price is then printed in the file.
//Then if user wants to see the receipt of everything he listed, ifstream will read the data that was printed in the file.
//While the Orders.txt file exists and is (fin), the data will be read and retrieved by the function fin.get(ch).
//Then, it will be printed. Finally, the file is closed each time as it marks the end of the use of the file.
//If user enters n or N the program will break and not complete the loop.

    totalPrice += totalPrice * 0.15;

    fout << "=================================\n";
    fout << "Total: " << "\t\t\t\t" << totalPrice << endl;
    fout.close();

    cout << "\nItems have been added to 'Order.txt'. Do you want to see the details here?(y or n): \n";
    cin >> selection;
    cout << "\n";
 

    ifstream fin;
    fin.open("Orders.txt");
    string line;



    while (fin) 
    {
        if (selection == 'y' || selection == 'Y')

        {
            fin.get(ch);
            cout << ch;
        }
        if (selection == 'n' || selection == 'N')
            break;
       
    }
        fin.close();
    

    cout << "\n" << "\n" << "\n";
    cout << "Thanks for using our system.\n";

    return 0;
}
