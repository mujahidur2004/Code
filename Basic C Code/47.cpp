/*Write a program to check whether a number is a strong number or not*/
#include<iostream>
#include<cmath>
using namespace  std;
int factorial(int a)
    { 
        int fact=1;
        for(int loop1=1;loop1<=a;loop1++)
           {
              fact=fact*loop1;
           }
           return fact;
    }

int main()
{
    int number,totalSum=0,numberSum;
    int y,temp;
    cout<<"Input a number to check wheather it is strong number :";
    cin>>number;
    temp=number;
    
   
    while(number!=0)
    {
        y=number%10;
        totalSum=totalSum+factorial(y);
        number=number/10;
       


    }
    

    
    if(temp==totalSum)
    {
        cout<<temp<< " is a strong number ";
    }
    else
    {
         cout<<temp<< " is not a strong number ";
    }


}