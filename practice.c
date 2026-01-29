// KYC verification using arrays and switch-case
#include<stdio.h>

int main()
{
    int pan[]={1111,2222,3333};
    int aadhar[]={4444,5555,6666};  
    int aapar[]={7777,8888,9999};
    int DL[]={9999,1234};
    int passport[]={4321,8765};

    int choice,id,i,found=0;

    printf("KYC verification system\n");
    printf("1. PAN number\n");
    printf("2. Aadhar number\n");
    printf("3. APAR number\n");
    printf("4. Driving License\n");
    printf("5. Passport number\n");

    printf("Enter your choice: \n");
    scanf("%d",&choice);

    printf("Enter your ID number: \n");
    scanf("%d",&id);

    switch (choice)
    {
        case 1:
            for(i=0;i<3;i++)
                if(pan[i]==id)
                { 
                    found=1;
                     break; 
                    }
            break;

        case 2:
            for(i=0;i<3;i++)
                if(aadhar[i]==id)
                {
                     found=1;
                     break; 
                    }
            break;

        case 3:
            for(i=0;i<3;i++)
                if(aapar[i]==id)
                {
                     found=1;
                     break;
                     }
            break;

        case 4:
            for(i=0;i<2;i++)
                if(DL[i]==id)
                {
                     found=1; 
                    break; 
                }
            break;

        case 5:
            for(i=0;i<2;i++)
                if(passport[i]==id)
                {
                     found=1; 
                    break; 
                }
            break;

        default:
            printf("Invalid choice\n");
            return 0;
    }

    if(found)
        printf(" Verified : ID found in the records\n");
    else
        printf(" Not Verified : ID not found in the records\n");

    return 0;
}
