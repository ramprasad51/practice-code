//Programm to understand variable length array(VLA) 
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];//VLA declaration

    for(i=0;i<n;i++)
    a[i]=i+1;//incrementing array elements from 1 to n

    printf("Array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}