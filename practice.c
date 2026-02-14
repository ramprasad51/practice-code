//C Programm to access and modify the members  of structure in array of structure
#include<stdio.h>
struct student
{
    int usn;
    float marks;
}; 

int main()
{
    int i;
    struct student s[2];
    for(i=0;i<2;i++)
    {
        printf("Enter USN and marks of student%d\n",i+1);
        scanf("%d %f",&s[i].usn,&s[i].marks);
    }

    s[0].marks+=5;

    printf("Students deatils after modification:\n");
    for(i=0;i<2;i++)
    {
        printf("USN:%d\t Marks:%.2f\n",s[i].usn,s[i].marks);
    }
    return 0;
}