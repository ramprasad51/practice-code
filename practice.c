//Floyd's Triangle printing using nested loops 
#include<stdio.h>
int main()
{
    int i,j,n,num=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)   //outer loop for rows
    {
        for(j=0;j<=i;j++)  //inner loop to print numbers in each row
        {
            printf("%d\t",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}