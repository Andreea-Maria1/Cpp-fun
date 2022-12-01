#include <iostream>
#include <string>
using namespace std;


//---------------------------------------------------------------------------------------------------------------------

int main()
{

//String line is to eventually be able to print out the whole line the user inputs.
//Secondly, the welcome message to the program is displayed on the screen with cout statements.

string line;

cout << "\t??????????????????????????????????\n" << "\t   Encrypted password Generator  \n" << "\t??????????????????????????????????" << endl;
cout << "\n";

//----------------------------------------------------------------------------------------------------------------------

//This is where the do while loop starts where if the user inputs NO it breaks, goes out of loop and print the goodbye message.
//For instance the do while loop will repeat until the user enters NO.
//As long as user enters anything but NO the loop will analyze each component of the string and replace it with the assigned value.
//Any letter or number that is not assigned in the if and else if statements will go in the else statement which serves as the equivalent of a default statement.
//Finally, the users input will be modified and printed whilst the initial line is also printed into the output.
//The continue statement will end the current iteration of the loop and will pass by the next iteration of the nearest enclosing do.

do{

cout << "=======================================\n";
cout << "Enter a word: (NO to stop)\n";

getline(cin, line);

if (line == "NO")
    break;

cout << "\n";
cout << "\n";
cout << "The encrypted password for \"" << line << "\" is ";


for(int index = 0; index < line.length(); index++)

    if ((line.at(index) == 'a') || (line.at(index) == 'b') || (line.at(index) == 'c')|| (line.at(index) == 'd'))
			line = line.substr(0, index) + "#" + line.substr(index + 1);

    else if ((line.at(index) == 'e') || (line.at(index) == 'f') || (line.at(index) == 'g')|| (line.at(index) == 'h'))
			line = line.substr(0, index) + "@" + line.substr(index + 1);

    else if ((line.at(index) == 'i') || (line.at(index) == 'j') || (line.at(index) == 'k')|| (line.at(index) == 'l'))
			line = line.substr(0, index) + "?" + line.substr(index + 1);

    else if ((line.at(index) == 'm') || (line.at(index) == 'n') || (line.at(index) == 'o')|| (line.at(index) == 'p'))
			line = line.substr(0, index) + "%" + line.substr(index + 1);

    else if ((line.at(index) == 'q') || (line.at(index) == 'r') || (line.at(index) == 's')|| (line.at(index) == 't'))
			line = line.substr(0, index) + "&" + line.substr(index + 1);

    else if ((line.at(index) == 'e') || (line.at(index) == 'f') || (line.at(index) == 'g')|| (line.at(index) == 'h'))
			line = line.substr(0, index) + "@" + line.substr(index + 1);

    else if ((line.at(index) == 'u') || (line.at(index) == 'v') || (line.at(index) == 'w')|| (line.at(index) == 'x'))
			line = line.substr(0, index) + "$" + line.substr(index + 1);

    else if ((line.at(index) == 'y') || (line.at(index) == 'z'))
			line = line.substr(0, index) + "!" + line.substr(index + 1);

    else if ((line.at(index) == 0 ) || (line.at(index) == 1 )|| (line.at(index) == 2 )|| (line.at(index) == 3 )|| (line.at(index) == 4 )|| (line.at(index) == 5 )|| (line.at(index) == 6 )|| (line.at(index) == 7 )|| (line.at(index) == 8 )|| (line.at(index) == 9 ))
        continue;

    else
        line = line.substr(0, index) + "*" + line.substr(index + 1);

cout << line << endl;
cout << "\n";

}while (line != "NO");

cout << "\n";
cout << "\n";
cout << "Thank you for using Encrypted Password Generator.\n";

    return 0;
}
