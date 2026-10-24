//write a program to display the first n terms of fibonacci series
#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,nextNumber,termsOfFebonacci;
    cin>>termsOfFebonacci;
    cout<<"Fibonacci series  " <<a<<" "<<b<<" ";
    for(int i=1;i<=termsOfFebonacci-2;i++)
    {
        nextNumber=a+b;
        cout<< nextNumber<<" ";
        a=b;
        b=nextNumber;
    }
}