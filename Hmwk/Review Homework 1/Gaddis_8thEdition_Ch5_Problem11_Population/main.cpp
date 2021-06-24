/*
    Author: Jovanny Alarcon
    Date:   June 22nd, 2021  4:20PM
    Purpose: Population Increase
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
    float strtPop,
        aveIncr,
        popIncr,
        numDays;
   
    //Initialize variables
    cout << "This program will show the increase in a population based on the starting population, "
         <<  "average daily increase, and number of days inputted." << endl
         <<  "What is the starting population size?" << endl;
    cin >> strtPop;
    while (strtPop < 2){
        cout << "Population must be greater than 2. Please input a valid value." << endl;
        cin >> strtPop;
    }
    cout << "What is the daily population increase as a percentage?" << endl;
    cin >> aveIncr;
    while (aveIncr < 0){
        cout << "Population increase must be a value greater than 0. Please input a valid value." << endl;
        cin >> aveIncr;
    }
    cout << "For how many days did the population multiply?" << endl;
    cin >> numDays;
    while (numDays < 1){
        cout << "Number of days must be greater than 1. Please input a valid value." << endl;
        cin >> numDays;
    }
    popIncr = strtPop * aveIncr / 100; //Population increase per day.
    
    //Process, map inputs to outputs
    for (int i = 0; i < numDays; i++)
        strtPop += popIncr;
    
    //Display your initial conditions as well as outputs.
    cout << "The population was " << static_cast<int>(strtPop + 0.5) << " after " << numDays << " days.";
    
    //Exit stage right
    return 0;
}
