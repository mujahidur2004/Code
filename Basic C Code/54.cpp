//write a program convert octal to binary 
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int octalNumber,decimalNumber=0,reverseNumber=0,i=0,y;
    cout<<"Input an octal number(using digit 0-7 ) :";
    cin>>octalNumber;
    cout<<" The octal number "<<octalNumber;
    while(octalNumber!=0)
    {
        y=octalNumber%10;

        decimalNumber=decimalNumber+(pow(8,i)*y);
        i++;
        octalNumber=octalNumber/10;

    }
    int binaryNumber,reverseNumber1=0;
    
   
    while(decimalNumber!=0)
    {
        int a =decimalNumber%2;
        binaryNumber=a+(binaryNumber*10);
        
        decimalNumber= decimalNumber/2;
    }
    
    while(binaryNumber!=0)
    {
        int b =binaryNumber%10;
        reverseNumber1=b+(reverseNumber1*10);
        
        binaryNumber= binaryNumber/10;
        

    }
    
    cout<<"The equivalent number  :"<<reverseNumber1;



}