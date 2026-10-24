//Write a program in C to find the prime numbers within a range of numbers.
#include<iostream>
using namespace std;
void num(int number)
{
    if(number==2) cout<<"2 ";
   
    if(number>2)
    {
        int i;
        for(i=2;i<number;i++)
        {
            if(number/i== 0)
            {
                break;
            }
           
           else
            {
                cout<<number<<" ";
                 break;
            }

        }

    }
    
    
}
int main()
{
    int starting_number,ending_number,number;
    cout<<"Input starting number of range:";
    cin>> starting_number;
    cout<<"Input ending number of range:";
    cin>>ending_number;
    cout<< "The prime number between "<< starting_number <<" and " <<ending_number<< " are :";
    for(starting_number;starting_number <= ending_number;starting_number++)
    {
        num(starting_number);


    }
}