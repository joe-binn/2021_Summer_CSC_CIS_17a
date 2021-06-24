/*
    Author: Jovanny Alarcon
    Date:   June 22nd, 2021  1:00PM
    Purpose: C++ Template to be used in all programs
    Version:First and Last
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int month,
        year;

    
    //Initialize variables
    cout << "This program tells you how many days in a month of a certain year you input." << endl
         << "Input a month." << endl;
    cin >> month;
    cout <<"Input a year." << endl;
    cin >> year;
   
    
    //Process, map inputs to outputs
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        cout << "31 days." << endl;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        cout << "30 days." << endl;
    else if (month == 2){
        if (year % 100 == 0 && year %  400 == 0)
            cout << "29 days." << endl;
        else if ( year % 100 != 0 && year % 4 == 0)
            cout << "29 days." << endl;
        else
            cout << "28 days." << endl;
    }
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}
