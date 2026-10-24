//Write a program in C to convert a binary number into octal number 
#include<iostream>
using namespace std;

int main()
    {
        int binaryNumber,decimalNumber=0,reverseNumber=0;
        cout<<"Input a binary number ";
        cin>>binaryNumber;
        cout<<"The binary number is :"<<binaryNumber<<endl;
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
       


        int octalNumber=0,reverseNumber1=0;
        
        
    
        while(decimalNumber!=0)
        {
            int a =decimalNumber%8;
            octalNumber=a+(octalNumber*10);
            
            decimalNumber= decimalNumber/8;
        }
    
        while(octalNumber!=0)
        {
            int b =octalNumber%10;
            reverseNumber1=b+(reverseNumber1*10);
            
            octalNumber= octalNumber/10;
            

        }
        
        cout<<"the equivalent octal number "<<reverseNumber1;
    }













