/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ian
 *
 * Created on June 20, 2019, 11:11 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    double celsTemp = 0;
    double fahrTemp = 0;
    cout << "Enter a temperature in Celsius to be converted to Fahrenheit: ";
    cin >> celsTemp;
    fahrTemp = 1.8 * celsTemp + 32;
    
    cout << celsTemp << " degrees Celsius is equal to " << 
            fahrTemp << " degrees Fahrenheit." << endl;
    
    return 0;
}

