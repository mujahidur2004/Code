/* Write a program in C to convert a octal number into a decimal number using math function*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int octalNumber,decimalNumber=0,reverseNumber=0,i=0,y;
    cout<<"Input an octal number(using digit 0-7 ) :";
    cin>>octalNumber;
    while(octalNumber!=0)
    {
        y=octalNumber%10;

        decimalNumber=decimalNumber+(pow(8,i)*y);
        i++;
        octalNumber=octalNumber/10;

    }
cout<<"The equivalent decimal number "<<decimalNumber;
}