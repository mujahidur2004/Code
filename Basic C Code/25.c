/*display the n terms of square natural number and their sum.  

1 4 9 16 ... n Terms

*/
#include <stdio.h>
#include<math.h>
int main()
{
    int i,number_of_terms,number;
   int sum=0;

    printf("Input number of terms : ");
    scanf("%d",&number_of_terms);
    printf("The square natural upto %d terms are :",number_of_terms);
    
    for(i=1;i<=number_of_terms;i++)
    { 
        number=pow(i,2);
        printf("%d  ",number);
        sum=sum+number ;
       
    }

     printf("\nThe Sum of Square Natural Number upto %d terms : %d",number_of_terms,sum);
 
    return 0;
}
