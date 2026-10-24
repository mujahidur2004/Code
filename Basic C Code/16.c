//display the n terms of even natural number and their sum.  
#include <stdio.h>
int main()
{
    int i,number,sum=0,number_of_terms;
    printf("Input number of terms : ");
    scanf("%d",&number_of_terms);
    printf("The even numbers are  : ");
    for(i=1,number=2;i<=number_of_terms;i++,number=number+2)
    { 
        printf("%d ",number);
        sum=sum+number ;
       
    }

     printf("\nThe Sum of even Natural Number upto %d terms : %d",number_of_terms,sum);
 
    return 0;
}