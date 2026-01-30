//Joining First name & surname without in-built string function
#include<stdio.h>
int main()
{
    char first[50],last[55],full[100];
    int i=0,j=0,length=0;
    printf("Enter first name: ");
    scanf("%s",first);
    printf("Enter Last name: ");
    scanf("%s",last);

    while(first[i]!='\0')
    {
        full[length++]=first[i++];
    }
    full[length++]=' ';
    while(last[j]!='\0')
    {
        full[length++]=last[j++];
    }
    full[length]='\0';

    printf("Full name:%s\n",full);
    printf("Length:%d\n",length);

    if(length>20)
    printf("Name t00 longgg for screen \n");
    else
    printf("Name fits the screen\n");
    return  0;
}