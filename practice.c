//C programm that  reads n integers,stores them in an array, and calculates their sum

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    int arr[100];

    printf("Enter the number of integers:  ");
    scanf("%d",&n);

    printf("Enter %d integers: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    printf("Sum of the integers is: %d\n",sum);
    return 0;

}