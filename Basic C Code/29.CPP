// Write a  program to check whether a given number is an armstrong number or not.
#include<iostream>
#include<cmath>
using namespace std;
int arms(int i)
{
    int sum =0;
    if(i<1){return 0;}
    else{
            sum =pow(i%10,3);
            sum=sum+arms(i/10);
            return sum;
       


        }
  

}
int main()
{
    int number,armstrong_number; 
    cout<< "Input a number: ";
    cin>> number;
   
    if(number==arms(number))
    {
        cout<<number << " is an armstrong number";

    }
    else{
        cout<<number << " is not  an armstrong number";


    }



    
}