/* Write a program in C to convert a binary number into a decimal number using math function*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int binaryNumber,decimalNumber=0,reverseNumber=0;
    cin>>binaryNumber;
    while(binaryNumber!=0)
      {
        int b =binaryNumber%10;
        reverseNumber=b+(reverseNumber*10);

        binaryNumber= binaryNumber/10;


      }

    while(reverseNumber!=0)
    {
        int a =reverseNumber%10;
        decimalNumber=(decimalNumber*2)+a;
        reverseNumber=reverseNumber/10;

    }
cout<<decimalNumber;
}
