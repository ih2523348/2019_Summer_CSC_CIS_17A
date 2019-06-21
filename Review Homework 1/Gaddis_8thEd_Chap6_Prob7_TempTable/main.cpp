/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ian
 *
 * Created on June 21, 2019, 1:35 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

double celsius (double);
/*
 * 
 */
int main(int argc, char** argv) 
{
    cout << fixed << setprecision(2);
    
    for (int i = 0; i < 21; i++)
    {
        cout << "Temp. in F: " << i << ", Temp. in C: " << celsius(i) << endl;
    }
    
    
    return 0;
}

double celsius(double fahrenheit)
{
    return ((0.5555555) * (fahrenheit - 32));
}