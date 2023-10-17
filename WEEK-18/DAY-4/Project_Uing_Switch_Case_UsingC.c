#include<stdio.h>
int sz;
void Array_Output(int a[])
{
    printf("Output of array a :");
    printf("\n");
    for(int i=0; i<sz; i++)
    {
        printf("%d ",a[i]);
    }
}
void add(int a[])
{
    int val,pos;
    printf("Please, type a value that you want to add to the array: ");
    scanf("%d",&val);
    printf("\n");
    printf("which index do you want to add to: ",val);
    scanf("%d",&pos);
    sz++;
    for(int i=sz; i>pos; i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=val;
    for(int i=0; i<sz; i++)
    {
        printf("%d ",a[i]);
    }
}
void delet(int a[])
{
    int val,pos=-1;
    printf("Which value do you want to delete from array a : ")
    printf("\n");
    scanf("%d",&val);
    for(int i=0; i<sz; i++)
    {
        if(a[i]==val)
        {
            pos=i;
            break;
        }
    }
    if(pos>=0)
    {
        for(int i=pos; i<sz; i++)
        {
            a[i]=a[i+1];
        }
        sz--;
        for(int i=0; i<sz; i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        printf("%d does not exist in array a",val);
    }
}
int main()
{
    int n;
    printf("Press any size for array a :");
    scanf("%d",&sz);
    int a[sz];
    for(int i=0; i<sz; i++)
    {
        scanf("%d",&a[i]);
    }
    while(1)
    {
        printf("Enter a value for the operation you want to perform among output, delet, add and Exist : \n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            Array_Output(a);
            printf("\n");
            break;
        case 2:
            delet(a);
            printf("\n");
            break;
        case 3:
            add(a);
            printf("\n");
            break;
        default:
            printf("Exist");
            printf("\n");
            break;
        }
        if(n==0)
        {
            break;
        }

    }
}
