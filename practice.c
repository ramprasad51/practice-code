//Passing entire structure to a function using call by value
#include <stdio.h>
struct student
{ 
    int roll;
    float marks;
};
//Function prototype
void display(struct student s);

void main()
{
    struct student s;
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%f",&s.marks);
//Function call
    display(s);
}
//Function definition
void display(struct student s)
{
    printf("\n Student deatils:\n");
    printf("Roll:%d\n",s.roll);
    printf("Marks:%.2f\n",s.marks);
}