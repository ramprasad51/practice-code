//To check a keyword(one string) in given course description(another string) and also find the length of the course description.using string functions.
#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    char description[MAX];
    char keyword[MAX];
    int len;
    printf("Enter course description: ");
    gets(description);
    printf("Enter keyword to search: ");
    gets(keyword);
    len=strlen(description);
    printf("The length of course description is:%d\n",len);

    if(strstr(description , keyword) != NULL)

{
    printf("Keyword \"%s\" found in \"%s\" description.\n", keyword, description);

}

else
{
    printf("Keyword \"%s\" not found in \"%s\" description.\n", keyword, description);
}
    return 0;
}