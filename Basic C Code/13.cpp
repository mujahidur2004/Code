//Make such a patern like right angle traangle with number increased by 1
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
            cout<<number++ <<" ";

          }
        cout<<endl;
        
    }
}