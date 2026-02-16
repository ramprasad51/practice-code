//Accessing array elements using pointer
#include<stdio.h>
int main()
{
    int a[5]={12,24,36,48,60};
    int i;
    int *p;
    p=a;//or p=&a[0];//pointer point to base address of array

    printf("Array elemets using pointer:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",*(p+i));//p+i gives the address of the ith element and * dereferences it to get the value
    }
    return 0;
}