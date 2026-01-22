// passing struct --> function using  *ptr
#include<stdio.h>
struct student
{
    int roll;
    float marks;
};

void modify(struct student *s);
int main()
{
    struct student s1;
    printf("Enter roll num: \n");
    scanf("%d",&s1.roll);
    printf("Enter marks: \n");
    scanf("%f",&s1.marks);
    modify(&s1);
    printf("\n After modification : \n");
    printf("Roll:%d\nmarks:%.2f\n",s1.roll,s1.marks);
    return 0;
}

void modify(struct student  *s)
{
    s -> marks += 5;
}

