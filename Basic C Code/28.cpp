//Find the erfect numbers within a given number of range.  
#include<iostream>
using namespace std;

int prime(int number)
 {
    int sum_of_divisor =0;
    for(int loop=1;loop<number;loop++)
        {
            if(number % loop == 0)
                {
                    
                    sum_of_divisor=sum_of_divisor+loop; 
                    
         
                }
        }
   
    
    
    return sum_of_divisor;
  

 }
int main()
{
    int starting_range_or_number,ending_range_of_number,number;
   cout<<"Input the starting range or number :";
   cin>> starting_range_or_number;
   cout<<"Input the ending range of number : ";
   cin>> ending_range_of_number;
   cout<<"The Perfect numbers within the given range : ";
   for(starting_range_or_number;starting_range_or_number<=ending_range_of_number;starting_range_or_number++)
   {
    number =prime(starting_range_or_number);
    if(number==starting_range_or_number)
    {
        cout<<number <<" ";
    }

   }
}
  
  
    
  