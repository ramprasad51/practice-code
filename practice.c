//Very simple C program to understand  enumeration data type
#include<stdio.h>
int main()
{
    enum week{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday=8, Saturday};
    enum week today;
    today=Tuesday;
    printf("Value of Tuesday is: %d\n",today);
    today=Friday;
    printf("Value of Friday is: %d\n",today);
    return 0;
}