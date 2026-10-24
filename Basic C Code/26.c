// find the sum of the series 1 +11 + 111 + 1111 + .. n terms.  

#include <stdio.h>
#include<math.h>
int main()
{
    int i,number_of_terms,number=1;
   int sum=0;

    printf("Input number of terms : ");
    scanf("%d",&number_of_terms);
    
    
    for(i=1;i<=number_of_terms;i++)
    { 
        
        printf("%d  ",number);
        sum=sum+number ;
        number=(number*10)+1 ;
        
       
    }

     printf("\nThe Sum is :  %d",sum);
 
    return 0;
}
