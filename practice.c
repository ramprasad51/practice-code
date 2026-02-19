//Store and display employee details using structure
#include<stdio.h>
//structure declaration
struct employee
{
    int emp_id;
    char name[20];
    float salary;
   long long int ph_num;//to store 10 digit phone number we can use long long int data type
};

int main()
{
    struct employee e;//structure variable declaration
//Reading employee details from user
    printf("Enter Employee id: ");
    scanf("%d",&e.emp_id);
    printf("Enter employee name: ");
    scanf("%s",e.name);
    printf("Enter Salary: ");
    scanf("%f",&e.salary);
    printf("Enter Phone number: ");
    scanf("%lld",&e.ph_num);
//Displaying employee details
    printf("\n~~~ Employee deatils ~~~\n");
    printf("Employee ID:%d\n",e.emp_id);
    printf("Employee Name:%s\n",e.name);
    printf("Employee salary:%.2f\n",e.salary);
    printf("Employee phone number:%lld",e.ph_num);

    return 0;
}