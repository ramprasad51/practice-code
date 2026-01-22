//comparing two structures variables of same type
#include <stdio.h>
#include <string.h>
struct student 
{
    int usn;
    char name[20];
    float marks;
};
int main()
{
    struct student  s1={51,"Ram",89.5};
    struct student  s2={51,"Ram",89.5};
    if(s1.usn==s2.usn && strcmp(s1.name,s2.name)==0 && s1.marks==s2.marks)
    {
    printf("Both structure are equal");
    }
        else
        {
        printf("Both structure are not equal");
        }
      return 0;
        
}