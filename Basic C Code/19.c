/*display the n terms of harmonic series and their sum.  
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms*/
#include <stdio.h>
int main()
{
    int i,number_of_terms;
    float number;
    double sum=0;

    printf("Input number of terms : ");
    scanf("%d",&number_of_terms);
    
    for(i=1,number=1;i<=number_of_terms;i++)
    { 
        number=1/(float)i;
        printf("1/%d + ",i);
        sum=sum+number ;
       
    }

     printf("\nSum of Series upto %d terms : %lf",number_of_terms,sum);
 
    return 0;
}