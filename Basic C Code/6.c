//Display the multiplication table of a given integer
#include<stdio.h>
int main()
{
    int n,Table_number,result;
    printf("Input  the number(Table to be calculated) :");
    scanf("%d",&Table_number);
    for(n=1;n<=10;n++)
        {

           result=n*Table_number;
            printf("%d * %d =%d \n",Table_number,n,result);

        }


    return 0;
}