/*write a prgram find out the sum of G.P series*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int startingNumber,nummbersOfIteam,commonRatio,sum=0;
    cout<<"Input the starting number of G.P series :";
    cin>>startingNumber;
    cout<<"Input the  number of iteams for G.P series :";
    cin>>nummbersOfIteam;
    cout<<"Input the commo ratio of A.P series :";
    cin>>commonRatio;
    cout<<" The numbers for the G.P series :";
    for(int i=1;i<=nummbersOfIteam;i++)
    {
        int number = startingNumber*(pow(commonRatio,i-1));
        sum+=number;
        cout<< number <<" ";


    }
     
    cout<<endl<<"The sum of G.P series are ";
    cout <<sum;
}