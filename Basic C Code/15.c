//calculate the factorial of a given number.  
#include<stdio.h>
int main()
{
    int fact=1,number,loop;
    printf("Input the number :");
    scanf("%d",&number);
    for(loop=1;loop<=number;loop++)
    {
        fact=fact*loop;
        
    }
    printf("The Factorial of %d is: %d",number,fact);




}