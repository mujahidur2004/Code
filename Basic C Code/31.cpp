//Write a program to display the pattern like a diamond.  
#include<iostream>
using namespace std;
int main()
{
    int number=1,row,Coloum1,coloum;
    for(row=1;row<=5;row++)
    {
        
        for(Coloum1=5;Coloum1>row;Coloum1--)
        {
            cout<< " ";
        }
        
        for(coloum=1;coloum<=(2*row)-1;coloum++)
          {
            cout<< "*" <<" ";

          }
        
        cout<<endl;
        
    }
    for(row=1;row<5;row++)
    {
        
        for(Coloum1=1;Coloum1<=row;Coloum1++)
        {
            cout<< " ";
        }
        
        for(coloum=7;coloum>=(2*row)-1;coloum--)
          {
            cout<< "*" <<" ";

          }
     cout<<endl;
    }

}