//Write a C program to determine whether a given number is prime or not.  
#include<iostream>
using namespace std;
int main()
{
    int  number;
    cout<<"Input a number: ";
    cin>> number;
    if(number==1)
    {
        cout<< number<<"  not is a prime number.";

    }
    if(number==2)
    {
        cout<< number<<"   is a prime number.";
    }
    for(int i=2;i<number;i++)
    {
        if( number % i ==0)
           { 
              cout<< number<<"  not is a prime number.";
              break;
           }
        else
        {
            cout<< number<<"   is a prime number.";
              break;
        }

    }

    
}