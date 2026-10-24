//make such a pattern like right angle triangle with number increased by 1.  
#include<stdio.h>
int main()
{
    int number=1,colum,row;
    printf("The pattern like : \n");
    for(row=1;row<5;row++)
    {
        for(colum=1;colum<=row;colum++)
        {
            printf("%d ",number++);
            
        }
        printf("\n");
    }
    
    return 0;
}