#include<stdio.h>

void Easy(int val)
{
    switch(val)
    {
    case 1:
        printf("Input n Numbers To Input The Array.\n");
        for(int i=0; i<sz; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("\n");
        break;
    case 2:
        printf("Output of array a :");
        printf("\n");
        for(int i=0; i<sz; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
        break;
    case 3:
        printf("Reverse Output of array a :");
        for(int i=sz-1; i>0; i--)printf("%d ",a[i]);
        printf("\n");
        break;
    case 4:
        printf("Input The Number You Want ~To Search In The Array : ");
        int finding_val;
        scanf("%d",&finding_val);
        printf("\n");
        int ans=0;
        for(int i=0; i<sz; i++)
        {
            if(finding_val==a[i])
            {
                ans=1;
                break;
            }
        }
        if(ans)printf("The Number %d is found In Array a.\n",finding_val);
        else printf("The Number %d is not found In Array A.\n",finding_val);
        break;
    case 5:
        for(int i=0; i<sz; i++)
        {
            for(int j=i+1; j<sz; j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=a[i];
                }
            }
        }
        printf("Below is the Output of Array a in ascending order :\n");
        for(int i=0; i<sz; i++)printf("%d ",a[i]);
        printf("\n");
        break;
    case 6:
        for(int i=0; i<sz; i++)
        {
            for(int j=i+1; j<sz; j++)
            {
                if(a[i]<a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=a[i];
                }
            }
        }
        printf("Below is the Output of Array a in descending order :\n");
        for(int i=0; i<sz; i++)printf("%d ",a[i]);
        printf("\n");
        break;
    default:
        printf("Error");
        printf("\n");
        break;
    }
}
int sz;
printf("Press any size for array a :\n");
scanf("%d",&sz);
int a[sz];
int main()
{
    printf("Press 1 To Input an Array .\n");
    printf("Press 2 To Output an Array .\n");
    printf("Press 3 To Reverse Output The Array .\n");
    printf("Press 4 To To Search a Number In The Array .\n");
    printf("Press 5 To Sort The Numbers In The Array In Ascending Order.\n");
    printf("Press 5 To Sort The Numbers In The Array In Descending Order.\n");

    while(1)
    {
        printf("Enter a value for the operation you want to perform among Input,Output,Reverse Output,Search a Number,Ascending,Descending : \n");
        int n;
        scanf("%d",&n);
        Easy(n);
        if(n==0)break;
    }
}
