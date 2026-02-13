//C programm to read n integers into an array and finds the maximum,minimum,and average of elements of array using a function & p*inters
#include<stdio.h>
//Function prototype
void analyze(int *a,int n,int *max,int *min,float *avg);
int main()
{
    int a[100],n,i;
    int max,min;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    analyze(a,n,&max,&min,&avg);//Function call

    printf("Largest=%d\n",max);
    printf("Smallest=%d\n",min);
    printf("Average=%.2f\n",avg);
    return 0;
}
void analyze(int *a,int n,int *max,int *min,float *avg)//Function definition
{
    int i,sum=0;
    *max=*min=a[0];//Initialize max and min with the first element of the array
    for(i=0;i<n;i++)
    {
        if(a[i]>*max)
        *max=a[i];

        if(a[i]<*min)
        *min=a[i];

        sum+=a[i];
    }
    *avg=(float)sum/n;

}