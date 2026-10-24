//Write a c program to check whether a given number is a perfect number or not.
#include<stdio.h>
int main()
{
    int number,positive_divisor,sum_of_divisor =0,loop;
    printf("Input the number : ");
    scanf("%d",&number);
    printf("The positive divisor : ");

    for(loop=1;loop<number;loop++)
        {
            if(number % loop == 0)
                {
                    printf("%d ",loop);
                    sum_of_divisor=sum_of_divisor+loop;
                }

        }
    printf("\nThe sum of the divisor is : %d\n",sum_of_divisor);
    if(sum_of_divisor == number)
    {
        printf("So, the number is  perfect.");
    }
    else
    {
        printf("So, the number is not perfect.");
    }
}