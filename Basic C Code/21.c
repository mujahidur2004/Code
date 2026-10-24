//display the sum of the series [ 9 + 99 + 999 + 9999 ...].  
#include <stdio.h>
#include<math.h>
int main()
{
    int i,number_of_terms,number;
   int sum=0;

    printf("Input number of terms : ");
    scanf("%d",&number_of_terms);
    
    for(i=1;i<=number_of_terms;i++)
    { 
        number=(pow(10,i))-1;
        printf("%d  ",number);
        sum=sum+number ;
       
    }

     printf("\nThe Sum of Series upto %d terms : %d",number_of_terms,sum);
 
    return 0;
}

