// Write a program to find the Armstrong number for a given range of number. 
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
    int number,armstrong_number,starting_number,ending_number; 
    cout<< "Input starting number of range: ";
    cin>> starting_number;
    cout<<"Input ending number of range :";
    cin>> ending_number;
    cout<<"Armstrong numbers in given range are:" ; 
    for(starting_number;starting_number<=ending_number;starting_number++)
    {
        if(starting_number==arms(starting_number))
        {
            cout<< starting_number<<" ";
        }
    

    }
    }

    



    
