//Make such a patern like a pyramid with an asterisk
#include<iostream>
using namespace std;
int main()
{
    int number=1,row,Coloum1,coloum;
    for(row=1;row<=4;row++)
    {
        for(Coloum1=4;Coloum1>row;Coloum1--)
        {
            cout<< " ";
        }
        
        for(coloum=1;coloum<=row;coloum++)
          {
            cout<<"*" <<" ";

          }
        cout<<endl;
        
    }
}