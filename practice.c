//String PALINDROME program
#include<stdio.h>
#include<string.h>
int main()
{
    int len=0,i,flag=1;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])//
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");
        return 0;
}