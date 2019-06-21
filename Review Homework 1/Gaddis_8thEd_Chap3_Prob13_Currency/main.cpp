/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ian
 *
 * Created on June 20, 2019, 11:28 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    static double YEN_PER_DOLLAR = 98.93;
    static double EUROS_PER_DOLLAR = 0.74;
    double dollarAmt = 0;
    double yenAmt = 0;
    double euroAmt = 0;
    cout << "Enter a U.S. dollar amount to be converted to yen and euros: ";
    cin >> dollarAmt;
    
    yenAmt = dollarAmt * YEN_PER_DOLLAR;
    euroAmt = dollarAmt * EUROS_PER_DOLLAR;
    cout << fixed << setprecision(2);
    cout << dollarAmt << " U.S. dollars in yen is "  << yenAmt << endl;
    cout << dollarAmt << " U.S. dollars in euros is " << euroAmt << endl;
    return 0;
}

