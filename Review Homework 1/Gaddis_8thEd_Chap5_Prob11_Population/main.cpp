/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ian
 *
 * Created on June 21, 2019, 12:52 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    double organismPop = 0;
    double popIncrease = -1;
    int days = 0;
    
    while (organismPop < 2)
    {
        cout << "Enter the number of organisms: ";
        cin >> organismPop;
    }
    
    while (popIncrease < 0)
    {
        cout << "Enter the average daily population increase in percentage: ";
        cin >> popIncrease;
    }
    
    while (days < 1)
    {
        cout << "Enter the number of days they will multiply: ";
        cin >> days;
    }
    
    popIncrease = popIncrease / 100;
    
    cout << fixed << setprecision(0);
    
    for(int i = 0; i < days; i++)
    {
        organismPop += (popIncrease * organismPop);
        cout << "Day " << i + 1 << ": " << organismPop << endl;
    }
            
    return 0;
}

