/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ian
 *
 * Created on June 20, 2019, 11:48 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int userMonth = 0;
    int userYear = 0;
    cout << "Enter a month (1-12): ";
    cin >> userMonth;
    cout << "Enter a year: ";
    cin >> userYear;
    
    if ((userYear % 100 == 0) && (userYear % 400 == 0) || (userYear % 100 != 0) && (userYear % 4 == 0))
    {
        months[1] = 29;
    }
    
    cout << months[userMonth - 1] << " days";
    return 0;
}
