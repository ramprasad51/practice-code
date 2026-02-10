// C program to print * pattern
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)//outer loop for number of rows
    {
        for(j=0;j<=i;j++)//Number of * in each row is equal to the row number
        {
            printf("*");
        }
        printf("\n");//new line after each row
    }
    return 0;

}