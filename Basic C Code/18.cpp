//find the sum of the series [ 1-X^2/2!+X^4/4!- .........]
#include<iostream>
#include<cmath>
using namespace std;
double sum =0,value_of_x,number,y;
int number_of_terms,loop,n;


int factorial(int m)
    { 
        int fact=1;
        for(int loop1=1;loop1<=m;loop1++)
           {
              fact=fact*loop1;
           }
           return fact;
    }



int main()
{
    
    
    cout<<"Input the value of x :";
    cin>>value_of_x;
    cout<<" Input the number of terms :";
    cin >> number_of_terms;
    for(loop=1,n=0;loop<=number_of_terms,n<=2*number_of_terms-2;loop++,n=n+2)
    {
      int power =pow(value_of_x,n);
     
      double s=factorial(n);
      if(loop%2==0)
      {
        number = -(power/s);

      }
      else
      {
        number = (power/s);
      }
      
      sum=sum+number;
      
      


    }
cout <<"The sum = "<< sum<< endl;
cout<< "Number of terms = "<<number_of_terms <<endl << "Value of x =" << value_of_x;

    

}