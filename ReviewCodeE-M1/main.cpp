/* 
 * File:   main.cpp
 * Author: Ian Haddock
 * Created on 6-28-2019
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short x;
    char shape; //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
    switch(shape)
    {
        case 'b':
            if (x % 2 == 0)
            {
                for (int i = 1; i <= x; i++)
                {
                    for (int j = 1; j <= x; j++)
                    {
                        if (i == j)
                        {
                            cout << i;
                        }
                        else
                        {
                            cout << " ";
                        }
                    }

                    cout << endl;
                }
            }
            else if (x % 2 != 0)
            {
                for (int i = 1; i <= x; i++)
                {
                    for (int j = 1; j <= x; j++)
                    {
                        if (i == j)
                        {
                            cout << (x - i) + 1;
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            }
            break;
        case 'f':
            if (x % 2 == 0)
            {
                for (int i = 1; i <= x; i++)
                    {
                        for (int j = 1; j <= x; j++)
                        {
                            if (j == (x + 1) - i)
                            {
                                cout << (x - i) + 1;
                            }
                            else
                            {
                                cout << " ";
                            }
                        }
                        cout << endl;
                    }
            }
            else if (x % 2 != 0)
            {
                for (int i = 1; i <= x; i++)
                    {
                        for (int j = 1; j <= x; j++)
                        {
                            if (j == (x + 1) - i)
                            {
                                cout << i;
                            }
                            else
                            {
                                cout << " ";
                            }
                        }
                        cout << endl;
                    }
            }
            break;
                    
        case 'x':
            if (x % 2 == 0)
            {
                for (int i = 1; i <= x; i++)
                {
                    for (int j = 1; j <= x; j++)
                    {
                        if (i == j)
                        {
                            cout << i;
                        }
                        else if (j == (x + 1) - i)
                        {
                            cout << (x - i) + 1;
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            }
            else if (x % 2 != 0)
            {
                for (int i = 1; i <= x; i++)
                {
                    for (int j = 1; j <= x; j++)
                    {
                        if (i == j)
                        {
                            cout << (x - i) + 1;
                        }
                        else if (j == (x + 1) - i)
                        {
                            cout << i;
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            }
    }
    
    
    //Exit
    return 0;
}