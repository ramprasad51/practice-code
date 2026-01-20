#include<stdio.h>
void main()
{
    int  score[100],i,j,n,temp;
    printf("Enter the num of elements: \n");
    scanf("%d",&n);

    printf("Enter the scores: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }

    
    for(i=0;i<n-1;i++)
    {
    for(j=0;j<n-i-1;j++)
    {
        if(score[j]<score[j+1])
        {
            temp=score[j];
            score[j]=score[j+1];
            score[j+1]=temp;
        }
    }
}
printf("\n Desc scores: \n");
for(i=0;i<n;i++)
{
    printf("%d\n",score[i]);
}
    
}