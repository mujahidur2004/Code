//write a program to display a number in reverse order
#include <iostream>
#include<cmath>

using namespace std ;
int main()
{
    int number,reverseNumber=0;
    cout<<"Input a number ";
    cin>>number;
    while(number!=0)
    {
        int a =number%10;
        reverseNumber=a+(reverseNumber*10);
        
        number= number/10;
    }
    cout<<"the number in reverse order "<<reverseNumber;
}