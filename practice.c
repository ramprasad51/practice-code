//Program in which we will pass an array of structure to a function and display the details of students.
#include<stdio.h>
//Defining a structure named student
struct student
{
    int roll;
    char name[25];
    float marks;
};
//Function to display the details of students
void display(struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)//Loop to display the details of students
    {
        printf("\n Roll no:%d",s[i].roll);
        printf("\n Name:%s",s[i].name);
        printf("\n Marks:%.2f",s[i].marks);
    }
}

int main()
{//Declaring an array of structure and initializing it with the details of students
    struct student s[2]={
        {1,"Ram",87.5},
        {3,"Prasad",93}
    };
    //Calling the display function to display the details of student
    display(s,2);

    return 0;
}

