//Read 10 Numbers from the keyboard and find their sum and average
#include<stdio.h>
int main()
{
    int number[10],sum=0,n;
    double average;
    for(n=1;n<11;n++)
        {   
            printf("Number-%d :",n);
            scanf("%d",&number[n]);
            sum=sum+number[n];
        }
    printf("The sum of 10 no is : %d",sum);
    average=(double)sum/ 10;
    printf("\nThe average is : %lf",average);

    return 0;
}