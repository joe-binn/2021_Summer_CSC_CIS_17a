/*
    Author: Jovanny Alarcon
    Date:   June 22nd, 2021  1:00PM
    Purpose: C++ Template to be used in all programs
    Version:First and Last
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <iomanip>
using namespace std;   //Library Name-space
//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float dollar,
            euro,
             yen;
    //Initialize variables
    cout << "Input the dollar amount you would like converted." << endl;
    cin >> dollar;
    euro = dollar * .84;
    yen  = dollar *  110.59;
    cout << fixed << setprecision(2)<< showpoint;
    cout << "There are " << euro << " euros in " << dollar << " dollars." << endl;
    cout << "There are " << yen << "  yen in " << dollar << " dollars." << endl;
    
    
    //Process, map inputs to outputs
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}
