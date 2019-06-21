/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ian
 *
 * Created on June 21, 2019, 1:49 AM
 */

#include <iostream>
#include <fstream>

using namespace std;

int sum(int arr[], const int size);
int indexOfMax(int arr[], const int size);

int main(int argc, char** argv) 
{
    static int numMonths = 3;
    static int numDays = 30;
    char reading;
    int rainy[numMonths] = {0};
    int cloudy[numMonths] = {0};
    int sunny[numMonths] = {0};
    char weatherData[numMonths][numDays];
    
    ifstream reader("rainOrShine.txt");
    if(!reader)
    {
        cout << "The file could not be opened." << endl;
        return 0;
    }
    
    for(int month = 0; month < numMonths; month++)
    {
        for(int day = 0; day < numDays; day++)
        {
            if(reader >> reading)
            {
                switch(reading)
                {
                    case 'R':
                        rainy[month]++;
                        break;
                    case 'C':
                        cloudy[month]++;
                        break;
                    case 'S':
                        sunny[month]++;
                        break;
                    default:
                        cout << "File format is incorrect." << endl;
                        reader.close();
                        return 0;
                }
                weatherData[month][day] = reading;
            }
            else
            {
                cout << "File readings are not complete." << endl;
                reader.close();
                return 0;
            }
        }
    }
    
    for(int month = 0; month < numMonths; month++)
    {
        cout << " The number of rainy days of month " << month + 6
                << " : " << rainy[month] << endl;
    }
        cout<< "      The total number of rainy days : "
                << sum(rainy, numMonths) << endl;

    for(int month = 0; month < numMonths; month++)
    {
        cout << " The number of cloudy days of month " << month + 6
                << " : " << cloudy[month] << endl;
    }
        cout<< "      The total number of cloudy days : "
                << sum(cloudy, numMonths) << endl;
        
    for(int month = 0; month < numMonths; month++)
    {
        cout << " The number of sunny days of month " << month + 6
                << " : " << sunny[month] << endl;
    }
        cout<< "      The total number of sunny days : "
                << sum(sunny, numMonths) << endl;
        
     cout << " The " << indexOfMax(rainy,numMonths) + 6
        << "th month had the most rainy days." << endl;
     
     reader.close();
     
    return 0;
}

int sum(int arr[], const int size)
{
    int total = 0;
    
    for(int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    
    return total;
}

int indexOfMax(int arr[], const int size)
{
    int indexMax = 0;
    for (int i = 1; i < size; i++)
    {
        if(arr[indexMax] < arr[i])
        {
            indexMax = i;
        }
    }
    
    return indexMax;
}

