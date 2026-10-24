//Display the multiplication table vertically from 1 to n
#include<stdio.h>
int main()
{
    int n,i,j,result;
    printf("Input upto the table number starting from 1 :");
    scanf("%d",&n);
    printf("Multiplication table from 1 to %d\n",n);
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=10;j++)
            {
                if(j==10){printf("%d*%d =%d ",j,i,i*j);}
                if(j!=10){

                printf("%d*%d =%d ,",j,i,i*j);}
            }
            printf("\n");

        }

    return 0;
}