// Display the n terms of odd natural number and their sum 
#include <stdio.h>
int main()
{
    int i,number,sum=0,number_of_terms;
    printf("Input number of terms : ");
    scanf("%d",&number_of_terms);
    printf("The odd numbers are  : ");
    for(i=1,number=1;i<=number_of_terms;i++,number=number+2)
    { 
        printf("%d ",number);
        sum=sum+number ;
       
    }

     printf("\nThe sum is : %d",sum);
 
    return 0;
}
