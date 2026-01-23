// Nested structures
#include<stdio.h>
struct marks{
    int m1;
    int m2;
};
struct student{
    int usn;
    struct marks m;
};
int main()
{
    struct student s;
    s.usn=51;
    s.m.m1=96;
    s.m.m2=100;
    printf("USN:%d\n",s.usn);
    printf("Marks1=%d\n",s.m.m1);
    printf("Marks2=%d\n",s.m.m2);
    return 0;

}