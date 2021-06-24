/*
    Author: Jovanny Alarcon
    Date:   June 22nd, 2021  1:00PM
    Purpose: C++ Template to be used in all programs
    Version:First and Last
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <fstream>     //File IO Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const int ROWS = 3,
          COLS = 30;

//Function Prototypes
void read(char [][COLS],int);
void report (char [][COLS],int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    char weather [ROWS][COLS];
    
    //Initialize variables
    read(weather,ROWS);
    report(weather,ROWS);
    
    //Process, map inputs to outputs
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}
void read(char table[][COLS], int rows){
    ifstream input;
    input.open("RainOrShine.txt");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < COLS; j++){
            char letter;
            input >> letter;
            table[i][j] = letter;
//            cout << table[i][j] << endl;
        }
    }
      input.close();
}

void report (char table[][COLS],int rows){
    int rainHgh = 0, //highest rainy month
        month,   //keep track of which month had the highest rainy days
        totRain = 0, totSun = 0, totCldy = 0; //Total amount of rainy/sunny/cloudy days in 3 months
    for (int i = 0; i < rows; i++){
        int rain = 0, sunny = 0, cloudy = 0;
        for (int j = 0; j < COLS; j++){
            if (table[i][j] == 'R'){
                totRain++;
                rain++;
            }
            else if (table[i][j] == 'S'){
                totSun++;
                sunny++;
            }
            else {
                totCldy++;
                cloudy++;                
            }
        }
        if (i  == 0){
            cout << "June had " << rain << " rainy days, " << sunny << " sunny days, "
                 << "and " << cloudy << " cloudy days." << endl;
            if (rainHgh < rain){
                rainHgh = rain;
                month = i;
            }
        }
        else if (i  == 1 ){
            cout << "July had " << rain << " rainy days, " << sunny << " sunny days, "
                 << "and " << cloudy << " cloudy days." << endl;
            if (rainHgh < rain){
                rainHgh = rain;
                month = i;
            }
        }
        else if (i  == 2 ){
            cout << "August had " << rain << " rainy days, " << sunny << " sunny days, "
                 << "and " << cloudy << " cloudy days." << endl;
            if (rainHgh < rain){
                rainHgh = rain;
                month = i;
            }
            cout << "All 3 months combined had " << totRain << " rainy days, " << totSun << " sunny days, "
                 << "and " << totCldy << " cloudy days." << endl;
            cout << "The month with the highest rainy day was ";
                    if (month == 0) cout <<"June ";
                    if (month == 1) cout <<"July ";
                    if (month == 2) cout <<"August ";
            cout << "with a total of " << rainHgh << " rainy days." << endl;
        }
        
    }
}
