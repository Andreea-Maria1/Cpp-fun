#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//------------------------------------------------------------------------------------------------------------

// Assignment 3

//Written by: Andreea Maria Ghioltan, 1964811

//For "C++ Programming for Science" Section 00002 - Winter 2022

//------------------------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------------------------------------
//This function is used to display the welcome message of the program.
//The void function will not return any value or parameters and will just print the cout statements in int main.
//Note: \t is to create an indent.

void displayHeader()
{
cout << "****************A****************B****************C********************************\n";
cout << " \t\tWelcome to ABC Group Analyzer System\n";
cout << "***********************************************************************************\n";
cout << " \n";
}
//------------------------------------------------------------------------------------------------------------
//This function is to get how many VFCV there are for each VFCV.
//For instance, the array displayed in int main contains 20 elements.
//The function will count how many times the numbers in the array are repeated and assign them to their VFCV which ranges from 5 to 25.
//Thus, when the program will count 2 times the number 9 it will print in main that: VFCV 9 is 2.
//In fact, this loop will repeat until number 25 is reached which is set with another loop found in main ( for(int number = 5; number <= 25; ++number)).
//Therefore, lets says that we change the range to <=26 it will print: VFCV 26 is 0 because in the array there is no number that is equivalent to 26.
//When the number equals a number in the array, the function will count++ the value.
//Count ++ will use the value and then increment it by one each time it is detected by the program and this function will repeat until the function in main is not valid.
//Count is returned and will be copied from the function back into int main.

int getEachVFCV(int number,int VFCV[],int lenght)
{

int count = 0;

for(int i = 0; i < lenght; i++){

    if(number == VFCV[i])
        count ++;

}

return count;
}
//------------------------------------------------------------------------------------------------------------
//This function is to determine the number of numbers the are above a certain value VFCV.
//For instance, the function will evaluate in the array how many values are above a specific number.
//For example, based on the array the value 6 will have 18 values which will be displayed in the output as: the number of vehicles above 6 is 18.
//In this case, since the 6 (or the value in question) is not included in the lenght of the array (20) needs to be subtracted by 1 (lenght-1).
//This is included in the for loop below. As the lenght of the array has been initialized to 20, lenght-1 will change it to 19 for the entire loop.
//Thus, as long as the the values respect the loop in int main (for (int number = 5; number <= 25; ++number)), this function's loop will act as an inner loop and repeat.
//If i >= lenght-1 the count for each number will be 0 as there is not more than 19 values in the array.
//Hence why, it is i<= lenght-1.
//Additionally, for the if statement, as long as the value in the array is bigger than the number (in the for loop in int main) it will count the number of values respecting that statement.
//Count ++ will use the value and then increment it by one each time it is detected by the program and this function will repeat until the function in main is not valid.
//Count is returned and will be copied from the function back into int main.
//In short, the for loop in int main (int number = 5; number <= 25; ++number)) will display the number and the loop in the function will count the number of values above that number.
//This process will repeat until the number 25.

int getAboveVFCV(int number, int VFCV[], int lenght)
{
int count = 0;

for (int i = 0; i <= lenght-1; i++){

    if (VFCV[i] > number)
        count++;
}

return count;
}
//------------------------------------------------------------------------------------------------------------
//The purpose of this function is to find the VFCV with the most elements.
//The function will go through the elements in the and find the VFCV with the highest number.
//Indeed, the loop will decrement each number and when the getEach function equals count it prints the number.
//The getEach function will go through the elements of the array and the maxNumVehiclesVFCV will analyze the value stored by the getEach function.
//When the loop requirement is met, it stops and prints the number in the output.
//Since there are only 20 initialized values in the VFCV array, the count is restricted to 20 and will decrement until validating the if statement.
//For instance, we can also write a new array :a[20]={1,1,1,1,2,2,2,2,3,3,3,1,1,1,4,4,4,4,1,1}.
//However, it is simpler to create an independent for loop (for(int count = 20; count >= 0; count--)) that will decrement from 20 till 0.
//Thus, since the getEach function's highest value is 4, when the count is going to decrement until number 4, it will print the VFCV (in this case VFCV 10).
//In short, count will decrement 20-19-18-17....4. getEach function will reach 4 and when they equal each other, maxNumVehicles function will print in the output.

int maxNumVehiclesVFCV(int number, int maxVFCV[], int lenght)
{

for(int count = 20; count >= 0; count--){

   for (int number = 5; number <= 25; ++number){

     if (count == getEachVFCV(number, maxVFCV,lenght))

        return number;
    }
}
return number;
}

//------------------------------------------------------------------------------------------------------------
//The purpose of this function is to find the highest VFCV with no vehicle (number of 0).
//The function will go through the elements in the and find the first VFCV with a number of zero by starting from the highest number (25).
//When the getEach function number equals 0, the number of the VFCV will be returned in main.
//When the loop requirement is met, it stops and prints the number in the ouput.

int highestVFCVnoVehicule(int number, int VFCV[], int lenght)
{

for (int number = 25; number > 5; --number){

    if(getEachVFCV(number, VFCV, lenght) == 0)

    return number;
}
return number;
}
//------------------------------------------------------------------------------------------------------------
//This function is used to display the end message of the program.
//The void function will not return any value or parameters and will just print the cout statements in int main.
//Note: \t is to create an indent.

void displayEndMessage()
{
    cout << "*************************************************************************************\n";
    cout << "\t\tThanks for using VFCV Analyser\n";
    cout << "*************************************************************************************\n";
}
//------------------------------------------------------------------------------------------------------------


int main()
{
//Initialization of important variables
int number = 0;
int lenght = 20;

//------------------------------------------------------------------------------------------------------------
//The function is called in main to display the message in the output.
//The functions and cout statement will print in order and perform every operation.

displayHeader();


//------------------------------------------------------------------------------------------------------------
//This part is related to the first function getEachVFCV.
//Indeed, we display the first cout statement in the output as well as declare the array.
//As mentioned previously, the for loop will loop for 25 numbers and print the cout statement repeatedly until reaching number 25.
//In order to get three rows, the if statement is made.
//When the remainder 3 of the numbers equals to 1, it will end the line and continue on another line.
//Thus, the line will end at the numbers 7, 10, 13, 16, 19, 22 and 25.
//To set equal spaces between each cout statement the setw() function is used.
//It will set the field width used for output operations which is the sequence of characters.
//In the next following cout statement the function is called in the cout statements.
//This function returns the value in the cout statement and print the value directly.


cout << "*The number of vehicules with\n";
cout << " \n";

int VFCV[20] = {8,12,13,15,15,15,10,9,9,10,25,18,7,6,5,10,24,10,11,12};

 for(int number = 5; number <= 25; ++number){

    cout << "VFCV " << setw(2) << number << " is " << setw(2) << getEachVFCV(number, VFCV, lenght) << setw(17);

    if (number%3 == 1)
        cout << "\n";

}
cout << endl << endl;


//------------------------------------------------------------------------------------------------------------
//As this loop is exactly the same, it is not merged with the previous one to avoid mixing the two statements together.
//Indeed, if the cout statements (above and below) are added together in the same for loop, the loop will repeat both cout statements.
//Thus, not separating the situations like wanted.
//As this is to represent a different situation, it is simpler to divide them as so.
//In this cout statement, the function getAboveVFCV and number are printed.
//Continuously, like previously mentioned, when the remainder 3 of the numbers equals to 1, it will end the line and continue on another line.

cout << "*The number of vehicules with VFCV\n";
cout << " \n";

for (int number = 5; number <= 25; ++number)
{
    cout << "Above "<< setw(2)  << number << " is " << setw(2) << getAboveVFCV(number, VFCV, lenght) << setw(16);

    if (number%3 == 1)
       cout << "\n";
}
cout << endl << endl << endl;

//------------------------------------------------------------------------------------------------------------
//In this cout statement, the function maxNumVehicles will print, based on the previous loops in the function.


cout << "*The VFCV collected by the maximum number of vehicles is " << maxNumVehiclesVFCV(number, VFCV, lenght);
cout  << endl << endl;

//------------------------------------------------------------------------------------------------------------
//In this cout statement, the function highestVFCVnoVehicle will print, based on the previous loops in the function.

cout << endl;
cout << "*The highest VFCV which belongs to no vehicle is " << highestVFCVnoVehicule(number, VFCV, lenght) << endl;
cout << endl << endl;

//------------------------------------------------------------------------------------------------------------
//The function is called in main to display the message in the output.

displayEndMessage();

//------------------------------------------------------------------------------------------------------------
  return 0;
}
