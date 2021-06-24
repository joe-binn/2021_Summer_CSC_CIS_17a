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
    float c, //degrees in Celsius
          f; //degrees in Fahrenheit
    
    //Initialize variables
    cout << "What is the temperature in degrees Celsius?" << endl;
    cin >> c;
    f = (9.0f/5.0)*c +32;
    cout << fixed << setprecision(2);
    cout << f;
    
    //Process, map inputs to outputs
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}
