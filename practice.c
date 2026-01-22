#include<stdio.h>
struct student
{
    char name[50];
    int usn;
    float marks;
};

int main()
{
    struct student s[50];
    int i,n;
    float total=0,avg;
    printf("Enter num of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter deatils of students %d \n",i+1);
        printf("Name: ");
        scanf("%s",&s[i].name);
        printf("USN: ");
        scanf("%d",&s[i].usn);
        printf("Marks: ");
        scanf("%f",&s[i].marks);
        total += s[i].marks;
    }
    avg=total/n;

    printf("\n class avg marks:%.2f\n",avg);
    printf("\n Students scoring above avg\n");
    for(i=0;i<n;i++)
    {
        if(s[i].marks>avg)
        {
            printf("%s(USN:%d)\n",s[i].name,s[i].usn);

        }

    }

printf("\n Students scoring below avg\n");
    for(i=0;i<n;i++)
    {
        if(s[i].marks<avg)
        {
            printf("%s(USN:%d)\n",s[i].name,s[i].usn);

        }
        

    }
    return 0;
}