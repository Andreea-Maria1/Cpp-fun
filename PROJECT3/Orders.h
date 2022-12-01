#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//Class declaration
//This class declaration will creat a class along with its attributes such as public, private class members.
//For instance, the private class members will not be accessed outside of object found in main.
//In private, the members can only be accessed from member functions.
//In public class, the members will be accessible outside of class from any function.

//Class Orders declaration
class Orders {

private:
    //Private members in with are stored the name, id, quantity and price.
    int id;
    string name;
    int quantity;
    double price;

public:

    //Default constructor.
    Orders();
    //Parameterized constructor.
    Orders(int id, string name, int quantity, double price);

    int getID();
    string getName();
    int getQuantity();
    double getPrice();
    void setID(int i);
    void setName(string n);
    void setQuantity(int q);
    void setPrice(double p);
    void displayInfo();
    double getItemTotal(int q, double p);
    double getTAXES();
};
