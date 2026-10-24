//Find strong numbers within a range of numbers.
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
    int number,totalSum=0;
    int y,temp;
    int startingNumber,endingNumber;
    cout<<"Input starting range of number ";
    cin>>startingNumber;
    cout<<"Input ending range of number ";
    cin>>endingNumber;
    cout<<"The strong numbers are :"<<endl;
    for(;startingNumber<=endingNumber;startingNumber++)
    {
        number=startingNumber;
        while(number!=0)
            {
                y=number%10;
                totalSum=totalSum+factorial(y);
                number=number/10;
            }
    

    
          if(startingNumber==totalSum)
          {
            cout<<totalSum<<" ";
          }
        totalSum=0;
      



    }
    
    
   
   
}