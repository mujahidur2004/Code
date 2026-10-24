//Display n terms of natural numbers and their sum
#include<stdio.h>
int main()
{

    int n,terms,sum=0;
    printf("Enter terms of natural numbers :");
    scanf("%d",&terms);
    printf("The first %d natural number is :\n",terms);
    for(n=1;n<=terms;n++)
        {
            printf("%d ",n);
            sum=sum+n ;

        }
    printf("\nThe sum of Natural Number upto %d terms : %d",terms,sum);
    return 0;
}