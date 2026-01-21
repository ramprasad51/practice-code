// passing individual maembers of struct to function
#include<stdio.h>

struct student
{
    int roll;
    float marks;
};

void display(int r, float m);
int main()
{
    struct student s1;
    printf("Enter student marks: \n");
    scanf("%f",&s1.marks);
    printf("Enter roll no: \n");
    scanf("%d",&s1.roll);
    display(s1.roll,s1.marks);
    return 0;
}

void display(int r,float m)
{
    printf("\n student deatils \n");
    printf("roll:%d\nmarks:%.3f\n",r,m);
}


