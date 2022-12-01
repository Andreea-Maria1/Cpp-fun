#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Orders.h"
using namespace std;


//Class implementation 
//The class implementation creates formal parameters where the data members are initialized.
//The values are assigned to the atributes (pass the pass values at the time of creating the object).



//This is the default constructor where we set the parameters: id, name, quantity and price to a default value.
//Indeed, the default constructor is used to create parameters that do not have any specific intial value.

Orders::Orders()
{
    id = -1;
    name = "null";
    quantity = 1;
    price = 0;
}

//This is the parameterized constructor which will set each parameter to a value.
//It will initialize data elements of different objects with diffferent values when they are created.

Orders::Orders(int i, string n, int q, double p) : id(i), name(n), quantity(q), price(p)
{}

//getID() will return the content of the ID in main.
int Orders::getID() {

    return id;
}

//getName() will return the content of the Name in main.
string Orders::getName() {

    return name;
}

//getQuantity() will return the content of the quantity in main.
int Orders::getQuantity() {

    return quantity;
}
//getPrice() will return the content of the price in main.
double Orders::getPrice() {

    return price;
}
//setID() will set the id to i
void Orders::setID(int i) {

    id = i;
}
//setName() will set the name to n
void Orders::setName(string n) {

    name = n;
}
//setQuantity() will set the quantity to q
void Orders::setQuantity(int q) {

    quantity = q;
}
//setPrice() will set the price to i
void Orders::setPrice(double p) {

    price = p;
}
//getItemTotal() will return the content of the p and q (price, and quantity) in main.
double Orders::getItemTotal(int q, double p) {

    return p * q;
}
