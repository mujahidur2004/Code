/*write a program  convert a decimal number into octalnumber without 
using an array
*/ 
#include <iostream>
#include<cmath>

using namespace std ;
int main()
{
    int decimalNumber,octalNumber=0,reverseNumber=0;
    cout<<"Enter a number t convert:";
    cin>>decimalNumber;
    
   
    while(decimalNumber!=0)
    {
        int a =decimalNumber%8;
        octalNumber=a+(octalNumber*10);
        
        decimalNumber= decimalNumber/8;
    }
  
    while(octalNumber!=0)
    {
        int b =octalNumber%10;
        reverseNumber=b+(reverseNumber*10);
        
        octalNumber= octalNumber/10;
        

    }
    
    cout<<"the octal is "<<reverseNumber;
}