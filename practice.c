// Program to calculate average marks of three subjects and determine pass/fail status using a function.
#include<stdio.h>
int ispassed(int s1,int s2,int s3);// function prototype
void main()
{
    int sub1,sub2,sub3;
    float avg;
    printf("Enter marks for sub1: ");
    scanf("%d",&sub1);
     printf("Enter marks for sub2: ");
    scanf("%d",&sub2);
     printf("Enter marks for sub3: ");
    scanf("%d",&sub3);
    avg=(sub1+sub2+sub3)/3;// calculating average
    printf("avg marks:%.2f\n",avg);
    if(ispassed(sub1,sub2,sub3)==1)// function call
    printf("Result:passed\n");
    else
    printf("Result:Fail\n");
}

int ispassed(int s1,int s2,int s3)// function definition
{
    if(s1>=40&& s2>=40 && s3>=40)// checking pass condition
    return 1;
    else
    return 0;
}