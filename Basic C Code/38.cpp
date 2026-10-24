//Write a program to check  whether a number is a palindrome or not
#include <iostream>
#include<cmath>

using namespace std ;
int main()
{
    int number,reverseNumber=0;
    cin>>number;
    int temp=number;
    while(number!=0)
    {
        int a =number%10;
        reverseNumber=a+(reverseNumber*10);
        
        number= number/10;
    }
    
    if(temp==reverseNumber)
    {
        cout<<  temp<<"  is a palindrome number";
    }
    else
    {
        cout<< temp << "  is not a palindrome number";
    }
}