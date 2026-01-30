//Finding a B00k ID with help of Binary search
#include<stdio.h>
int main()
{
    int bookid[35];
    int low,mid,high,key,loc=-1;
    int i,n;

    printf("Enter the num of books: ");
    scanf("%d",&n);

    printf("Enter the the %dbooks in ascending order:  \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&bookid[i]);
    }

    printf("Enter the bookid to search: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
    

    if(bookid[mid]==key)
    {
        loc=mid;
        break;
        
    }
    else if(bookid[mid]<key)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
    }

    if(loc!=-1)
    {
        printf("Element %d found at location %d\n",key,loc+1);
    }
    else
    {
       printf("Element not found \n");
    }
    return 0;
}