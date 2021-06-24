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
float celsius (float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float c, f;
    //Initialize variables
    cout << "Input a temperature in fahrenheit to convert it to Celsius." << endl;
    cin >> f;
    
    //Process, map inputs to outputs
    c = celsius (f);
    
    //Display your initial conditions as well as outputs.
    cout << f << " degrees in Fahrenheit is " << c << " degrees Celsius." << endl;
    
    //Exit stage right
    return 0;
}

float celsius (float f){    
    cout << "°" << "F" << "     " << "             °C" << endl;
    for (int i = 0; i <= 20; i++){
        cout << i << "°F" << setw(20) << (5.0f/9)*(i-32) << "°C" << endl;
    }
    return (5.0f/9)*(f-32);
}