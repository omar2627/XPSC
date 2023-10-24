#include<stdio.h>
#include<stdlib.h>
int sz;

int *a=NULL;
void Easy(int val)
{
    switch(val)
    {
    case 1:
        if(a!=NULL)free(a);
        printf("\n");
        printf("Press any size for array a :\n");

        scanf("%d",&sz);
        printf("\n");
        a=(int*)malloc(sz * sizeof(int));
        printf("Input n Numbers To Input The Array :\n");
        printf("\n");
        for(int i=0; i<sz; i++)
        {
            scanf("%d",&a[i]);

        }
        printf("\n");
        break;
    case 2:
        printf("\n");
        if(a==NULL)
        {
            printf("Array a is not initialized.Please input data first.\n");
            break;
        }
        printf("Output of array a :");
        printf("\n");
        printf("\n");
        for(int i=0; i<sz; i++)
        {
            printf("%d ",*(a+i));

        }
        printf("\n");
        break;
    case 3:
        printf("\n");
        if(a==NULL)
        {
            printf("Array a is not initialized.Please input data first.\n");
            break;
        }
        printf("Reverse Output of array a :");
        printf("\n");
        printf("\n");
        for(int i=sz-1; i>=0; i--)
        {
            printf("%d ",*(a+i));
        }
        printf("\n");
        break;
    case 4:
        printf("\n");
        if(a==NULL)
        {
            printf("Array a is not initialized.Please input data first.\n");
            break;
        }
        printf("Input The Number You Want To Search In The Array : ");
        int finding_val;
        scanf("%d",&finding_val);
        printf("\n");
        int ans=0;
        for(int i=0; i<sz; i++)
        {
            if(finding_val==*(a+i))
            {
                ans=1;
                break;
            }
        }
        if(ans)printf("The Number %d is found In Array a.\n",finding_val);
        else printf("The Number %d is not found In Array A.\n",finding_val);
        printf("\n");
        break;
    case 5:
        if(a==NULL)
        {
            printf("Array a is not initialized.Please input data first.\n");
            break;
        }
        for(int i=0; i<sz; i++)
        {
            for(int j=i+1; j<sz; j++)
            {
                if(*(a+i)>*(a+j))
                {
                    int temp=*(a+i);
                    *(a+i)=*(a+j);
                    *(a+j)=temp;
                }
            }
        }
        printf("\n");
        printf("Below is the Output of Array a in ascending order :\n");
        printf("\n");
        for(int i=0; i<sz; i++)printf("%d ",*(a+i));
        printf("\n");
        break;
    case 6:
        if(a==NULL)
        {
            printf("Array a is not initialized.Please input data first.\n");
            break;
        }
        for(int i=0; i<sz; i++)
        {
            for(int j=i+1; j<sz; j++)
            {
                if(*(a+i)<*(a+j))
                {
                    int temp=*(a+i);
                    *(a+i)=*(a+j);
                    *(a+j)=temp;
                }
            }
        }
        printf("\n");
        printf("Below is the Output of Array a in descending order :\n");
        printf("\n");
        for(int i=0; i<sz; i++)printf("%d ",*(a+i));
        printf("\n");
        break;
    default:
        printf("\n");
        printf("Error");
        printf("\n");
        break;
    }
}

int main()
{
    printf("Press 1 To Input an Array .\n");
    printf("Press 2 To Output an Array .\n");
    printf("Press 3 To Reverse Output The Array .\n");
    printf("Press 4 To Search a Number In The Array .\n");
    printf("Press 5 To Sort The Numbers In The Array In Ascending Order.\n");
    printf("Press 6 To Sort The Numbers In The Array In Descending Order.\n");
    printf("Press Any Number Except 1 to 6 Break The Entire Program.\n");

    while(1)
    {
        printf("\n");
        printf("Enter a value for the operation you want to perform among 1,2,3,4,5 and 6 : ");
        int n;
        scanf("%d",&n);
        Easy(n);
        if(n<1|| n>6)break;
    }
}
