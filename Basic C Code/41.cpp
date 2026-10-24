/*write a program  convert a decimal number into binary without 
using an array
*/ 
#include <iostream>
#include<cmath>

using namespace std ;
int main()
{
    int decimalNumber,binaryNumber,reverseNumber=0;
    cin>>decimalNumber;
   
    while(decimalNumber!=0)
    {
        int a =decimalNumber%2;
        binaryNumber=a+(binaryNumber*10);
        
        decimalNumber= decimalNumber/2;
    }
    
    while(binaryNumber!=0)
    {
        int b =binaryNumber%10;
        reverseNumber=b+(reverseNumber*10);
        
        binaryNumber= binaryNumber/10;
        

    }
    
    cout<<reverseNumber;
}