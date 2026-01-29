//Structure that holds details of B00K & displays them using a C programm
#include<stdio.h>
struct book // structure declaration
{
    char title[50];
    char author[50];
    int year;
};

int main()
{
    int i,n;
    printf("Enter number of books : ");
    scanf("%d",&n);

    struct book booklist[n];// array of structures

    for(i=0;i<n;i++)
    {
        printf("Enter title,author & year of publication for book%d\n",i+1);
        scanf("%s %s %d",booklist[i].title,booklist[i].author,&booklist[i].year);
    }

    printf("\n Library book deatils: \n");
    for(i=0;i<n;i++)
    {
        printf("Book%d:%s by %s(in %d)\n ",i+1,booklist[i].title,booklist[i].author,booklist[i].year);
    }
    return 0;
}