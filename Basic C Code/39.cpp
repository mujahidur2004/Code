/*write a program find the number and sum of all integer between 100 
and 200  which are divisible by 9
*/
#include<iostream>
using namespace std;
int main()
{
    int  sum=0;
    cout<<"Numbers between 100 and 200,divisible by 9 :"<<endl;
    for(int i=100;i<=200;i++)
    {
        if(i%9==0)
        {
            cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<endl<<"The sum :"<<sum;

}