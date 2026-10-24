//Write a program in C to print the Floyd's Triangle
#include<stdio.h>
int main()
{
    int coloum,row,loops,multiplication;
    for(row=1;row<=5;row++)
        {
            for(coloum=1;coloum<=row;coloum++)
                {
                    multiplication=row*coloum;
                    if(coloum %2==0 && row%2==0)
                        {
                            printf("%d",1);
                        }
                    else
                        {
                            printf("%d",multiplication %2);
                        }
                }
            printf("\n");
        }
}