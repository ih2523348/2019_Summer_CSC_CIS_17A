/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ian
 *
 * Created on June 21, 2019, 2:48 AM
 */

#include <iostream>
#include <string>

using namespace std;

void stringSort(string[], int);
bool binarySearchString(const string[], string, int);

int main(int argc, char** argv) 
{
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                "Taylor, Terri", "Johnson, Jill",
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                "James, Jean", "Weaver, Jim", "Pore, Bob",
                                "Rutherford, Greg", "Javens, Renee",
                                "Harrison, Rose", "Setzer, Cathy",
                                "Pike, Gordon", "Holland, Beth" };

    stringSort(names, NUM_NAMES);

    string searchName;
    cout << "Enter the name to search:\n";
    getline(cin, searchName);

    if(binarySearchString(names, searchName, NUM_NAMES))
    {
        cout << searchName << " was found in list!\n";
    }
    else
    {
        cout << searchName << " was not found!\n";
    }

    return 0;
}

void stringSort(string names[], int arraySize)
{
    int startScan, minIndex;
    string minName;

    for(startScan = 0; startScan < arraySize-1; startScan++)
    {
        minName = names[startScan];
        minIndex = startScan;
        
        for(int index = startScan + 1; index < arraySize; index++)
        {
            if(names[index] < minName)
            {
                minName = names[index];
                minIndex = index;
            }
        }
        names[minIndex] = names[startScan];
        names[startScan] = minName;
    }
}

bool binarySearchString(const string names[], string searchName, int arraySize)
{
    int first = 0, last = arraySize-1, middle;
    
    while(first <= last)
    {
        middle = (first + last) / 2;
        //check if middle element is equal to our value
        if(names[middle] == searchName)
        {
            return true;
        }
        else if(names[middle] > searchName)
        {
            last = middle - 1;
        }
        else if(names[middle] < searchName)
        {
            first = middle + 1;
        }
    }
    
    return false;
}

