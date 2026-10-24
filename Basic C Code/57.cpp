//Write a program in C to print a string in reverse order
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word,Reverse;
    int i=0,size;
    cout<<"Input a string to reverse :";
    cin>>word;
 
    cout<<"Reversed string is:";
    size=(sizeof(word)/4.00)-1;
    for(size-1;size>=0;size--)
    {
        cout<< word[size];
    }

}