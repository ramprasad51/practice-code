//Passing 1-D array to a function
#include<stdio.h>
//Function to display the elements of an array
void display( int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}

int main()
{
    int arr[5]={10,20,30,40,50};//Declaring and initializing an array

    printf("Array elements are: \n");
    display(arr,5);//Passing array to a function
    return 0;
}