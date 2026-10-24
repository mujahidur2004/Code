//Write a program to find the length of a string without using the library function.  
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int size,i;
    string word;
    cout<<"Input a string :";
    cin>>  word;
  
    size=(sizeof(word)/4.00)-1;
    cout<< "The string contains "<<size<<" number of characters."<<endl;
    cout<<"So, the length of the string welcome is : "<< size;

}
