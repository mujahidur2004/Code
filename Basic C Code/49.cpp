/*write a prgram find out the sum of A.P series*/
#include<iostream>
using namespace std;
int main()
{
    int startingNumber,nummbersOfIteam,commonDifferance,sum=0;
    cout<<"Input the starting number of A.P series :";
    cin>>startingNumber;
    cout<<"Input the  number of iteams for A.P series :";
    cin>>nummbersOfIteam;
    cout<<"Input the commo differance of A.P series :";
    cin>>commonDifferance;
    cout<<"The sum of A.P series are ";
    for(int i=1;i<=nummbersOfIteam;i++)
    {
        int number = startingNumber+((i-1)*commonDifferance);
        sum+=number;
        if(i< nummbersOfIteam)
        {
             cout<< number<< " +";

        }
        else
        {
            cout<< number<<" =";
        }


    }
    cout <<sum;
}