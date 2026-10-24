//display the pattern like right angle triangle with a number.  
#include<stdio.h>
int main()
{
    int colum,row;
    printf("The pattern like : \n");
    for(row=1;row<5;row++)
    {
        for(colum=1;colum<=row;colum++)
        {
            printf("%d",colum);
        }
        printf("\n");
    }
    
    return 0;
}