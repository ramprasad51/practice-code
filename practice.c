// C program to add two matrices using 2D arrays & nested loops
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10];
    int m,n,i,j;

    printf("Enter number of rows & columns: ");
    scanf("%d %d",&m,&n);

    printf("Enter elements of first matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
     printf("Enter elements of second matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }
// Adding two matrices
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("Sum of two matrices: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}