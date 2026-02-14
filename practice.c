//Arrays within structures
#include <stdio.h>
struct student
{
    int usn;
    int marks[3];//array inside structure
};

int main()
{
    struct student s;
    int i;
    s.usn=93;

    printf("Enter  3 subject marks:\n");//taking input for array inside structure
    for(i=0;i<3;i++)
    {
        scanf("%d",&s.marks[i]);
    }
    printf("USN:%d\n Marks:\n",s.usn);//printing the array elements of structure
    for(i=0;i<3;i++)
    {
        printf("%d\t",s.marks[i]);
    }
    return 0;

}
