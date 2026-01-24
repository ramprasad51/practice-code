// Using Function to find sum of two numbers//
#include<stdio.h>
int sum(int a,int b);      //Function declration
int main()
{
    int a,b,result;    //a,b are 2 num for addition nd result to store their sum
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    result=sum(a,b);   //Function call
    printf("Sum of two numbers is %d\n",result);
    return 0;
}

int sum(int x , int y)  //Function defintion
{
    int s;
    s=x+y;
    return s;
}