/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;
    float timeAndHalf;
    float doubleTime;
    float doubleTimePay;
    unsigned short hrsWrkd;
    float grossPay = 0;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    timeAndHalf = (payRate * 0.5) + payRate;
    doubleTime = payRate * 2;
    //Calculate Paycheck
    if (hrsWrkd <= 20)
    {
        grossPay = hrsWrkd * payRate;
    }
    else if (hrsWrkd > 20 && hrsWrkd <= 40)
    {
        grossPay = (20 * payRate) + (timeAndHalf * (hrsWrkd - 20));
    }
    else if (hrsWrkd > 40)
    {
        grossPay = (20 * payRate) + (timeAndHalf  * 20) + (doubleTime * (hrsWrkd - 40));
    }
    
    //Output the check
    cout << fixed << setprecision(2);
    cout << "$" << grossPay << endl;
    
    //Exit
    return 0;
}