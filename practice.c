//Programm to print Number Pyramid pattern
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of rows: ");//Input number of rows in the pyramid
    scanf("%d",&n);

    for(i=1;i<=n;i++)//Loop to print each row of the pyramid
    {
        for(j=1;j<=n-i;j++)//Loop to print spaces before the numbers in each row
        {
            printf(" ");//Print space before the numbers
        }

        for(k=1;k<=i;k++)//Loop to print numbers in increasing order in each row
        {
            printf("%d",k);//Print numbers in increasing order
        }

        for(k=i-1;k>=1;k--)//Loop to print numbers in decreasing order in each row
        {
            printf("%d",k);//Print numbers in decreasing order
        }
        printf("\n");//Move to the next line after each row is printed
    }
    return 0;
}