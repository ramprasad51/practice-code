// C program that takes a student marks as input and prints the corresponding grade
#include <stdio.h>
void main()
{
    int marks;
    printf("Enter the student marks: ");
    scanf("%d",&marks);
    
    if(marks<0 || marks>100)
    {
        printf("Invalid marks\n");
    }
    else if(marks>=90)
    {
        printf("Grade: A\n");
    }
    else if(marks>=75)
    {
        printf("Grade: B\n");
    }
    else if(marks>=60)
    {
        printf("Grade: C\n");
    }
    else if(marks>=50)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }
}