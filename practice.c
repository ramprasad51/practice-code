//Toggle case of a string 
#include<stdio.h>
int main()
{
    char str[50];
    int i=0;

    printf("Enter a string: ");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]>='A'&& str[i]<='Z')
        {
            str[i]=str[i]+32;//UPPERCASE to lowecase
        }
        else if(str[i]>='a'&& str[i]<='z')
        {
            str[i]=str[i]-32;//lowercase  to UPPERCASE
        }
        i++;//incrementing the index to move to the next character
    }

    printf("Converted string:%s",str);//printing the converted string
    return 0;
}