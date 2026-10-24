//find the sum of the series [ X-X^3+X^5-x^7 .........]
#include<iostream>
#include<cmath>
using namespace std;
double sum =0,value_of_x,number,y;
int number_of_terms,loop,n;





int main()                                          
{
    
    
    cout<<"Input the value of x :";
    cin>>value_of_x;
    cout<<" Input the number of terms :";
    cin >> number_of_terms;
    cout<<" The Values of series :"<<endl;
    for(loop=1,n=1;loop<=number_of_terms,n<=2*number_of_terms;loop++,n=n+2)
    {
      int power =pow(value_of_x,n);
     
      
      if(loop%2==0)
      {
        number = -power;

      }
      else
      {
        number = power;
      }
      
      sum=sum+number;
      cout<<number<< endl;
      
      


    }
cout <<"The sum = "<< sum<< endl;

    
        
        

            
       
    
    
       
   



    

}