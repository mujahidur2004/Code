// Write a program in C to check Armstrong number of n digits.  
#include<iostream>
#include<cmath>
using namespace std;
int arms(int i)
{
    int sum =0;
    if(i<1){return 0;}
    else{
            sum =pow(i%10,4);
            sum=sum+arms(i/10);
            return sum;
       


        }
  

}
int main()
{
    int number,armstrong_number; 
    cout<< "Input an integer :";
    cin>> number;
   
    if(number==arms(number))
    {
        cout<<number << " is an armstrong number";

    }
    else{
        cout<<number << " is not  an armstrong number";


    }



    
}