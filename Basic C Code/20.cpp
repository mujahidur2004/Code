//Display the pattern like a pyramid using asterrisk and each row contain an odd number of asterisk
#include<iostream>
using namespace std;
int main()
{
    int number=1,row,Coloum1,coloum;
    for(row=1;row<=3;row++)
    {
        for(Coloum1=3;Coloum1>row;Coloum1--)
        {
            cout<< " ";
        }
        
        for(coloum=1;coloum<=(2*row)-1;coloum++)
          {
            cout<< "*" <<" ";

          }
        cout<<endl;
        
    }
}