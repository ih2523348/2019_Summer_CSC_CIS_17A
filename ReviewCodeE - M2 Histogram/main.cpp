/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
#include <array>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char numArr[4];
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin >> numArr;
    
    //Histogram Here
    for (int i = 3; i < sizeof(numArr); i--)
    {
        if (isdigit(numArr[i]))
        {
            cout << numArr[i] << " ";
            for (int j = 48; j < numArr[i]; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            cout << numArr[i] << " " << "?" << endl;
        }
    }
    
    //Exit
    return 0;
}