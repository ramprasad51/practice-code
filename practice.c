// A program to check whether a number is palindrome or not
#include<stdio.h>
int main()
{
    int n,rev=0,temp,rem;//rev is used to store the reverse of the number, temp is used to store the original number and rem is used to store the remainder
    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;

    while(n!=0)//loop to reverse the number
    {
        rem=n%10;//to get the last digit of the number

        rev=rev*10+rem;//to add the last digit to the reverse number

        n=n/10;//to remove the last digit of the number
    }
    if(temp==rev)//to check whether the original number and the reverse number are same or not
    printf("The number is palindrome\n");
    else
    printf("The number is not palindrome\n");

    return 0;
}