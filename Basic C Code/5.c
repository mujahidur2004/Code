//Display the cube of the number upto given a integer
#include<stdio.h>
#include<math.h>
int main()
{
    int i,num_of_terms,cube; 
    printf("Enter number of terms :");

    scanf("%d",&num_of_terms);
    for(i=1;i<=num_of_terms;i++)
        {
            cube =pow(i,3);
            printf("Number is : %d and cube of the %d is : %d \n",i,i,cube);
        }


    return 0;
}