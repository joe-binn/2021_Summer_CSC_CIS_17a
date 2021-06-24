/*
    Author: Jovanny Alarcon
    Date:   June 22nd, 2021  1:00PM
    Purpose: C++ Template to be used in all programs
    Version:First and Last
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <string>
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes
void selSort(string [], int); 
void print  (const string[], int);
int binSrch(const string[], int, string);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] =  {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                "Taylor, Terri", "Johnson, Jill",
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                "James, Jean", "Weaver, Jim", "Pore, Bob",
                                "Rutherford, Greg", "Javens, Renee",
                                "Harrison, Rose", "Setzer, Cathy",
                                "Pike, Gordon", "Holland, Beth" }; 
    string find;
    int position;
    
    //Process, map inputs to outputs
    selSort(names, NUM_NAMES);
//    print  (names, NUM_NAMES);
    cout << "Which employee are you looking for?" << endl;
    getline(cin,find);
    position = binSrch(names, NUM_NAMES,find);
    
            
    
    //Display your initial conditions as well as outputs.
    if (position == -1)
        cout << "Employee is not in this database." << endl;
    else{
        cout << "Employee was found in element " << position << " of the database." << endl;
    }
    //Exit stage right
    return 0;
}

void selSort(string array[], int size)
{
    int     minIndex;
    string  minValue;
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = array[start];
        for(int index = start + 1; index < size; index++) 
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[start];
        array[start] = minValue;
    }
}

void print  (const string a[], int size){
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
        cout << i << " ";
        if ((i + 1) % 3 == 0)
            cout << endl;
    }
}

int binSrch(const string array[], int size, string value)
{
     int first = 0, // First array element
     last = size - 1, // Last array element
     middle, // Midpoint of search
     position = -1; // Position of search value
     bool found = false; // Flag

     while (!found && first <= last)
     {
         middle = (first + last) / 2; // Calculate midpoint
         if (array[middle] == value) // If value is found at mid 
         {
             found = true;
             position = middle;
         }
         else if (array[middle] > value) // If value is in lower half
             last = middle - 1;
         else
             first = middle + 1; // If value is in upper half
         }
         return position;
 } 
