//make such a pattern like a pyramid with a number which will repeat the number in the same row
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
            cout<< row <<" ";

          }
        cout<<endl;
        
    }
}