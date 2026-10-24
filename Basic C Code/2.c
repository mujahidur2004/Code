//Find the sum of the first 10  natural numbers
#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("The first 10 natural number is :\n");
    for(i=1;i<11;i++)
    { 
        printf("%d ",i);
        sum=sum+i ;
       
    }

     printf("\nThe sum is : %d",sum);
 


    return 0;
}
