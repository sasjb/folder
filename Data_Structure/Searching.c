#include<stdio.h>
void Linearsearch()
{
    int n,k; scanf("%d",&n);
    int ar[n+10],i,ind=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the value you want to search : ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(ar[i]==k)
        {
            ind=i+1;
        }
    }
    if(ind==0)
        printf("The value %d not found in the array!\n",k);
    else
        printf("The value %d found in the array %dth position.\n",k,ind);
}
void Binarysearch()
{
   // printf("****\n");
    int n,k; scanf("%d",&n);
    int ar[n+10],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]); // Array must in sorting order.
    }
    printf("Enter the value you want to search : ");
    scanf("%d",&k);
    int mid,mi=0,ma=n-1;
    while(ma>=mi)
    {
        mid=(ma+mi)/2;
        if(ar[mid]==k)
        {
            printf("The value %d found in the array %dth position.\n",k,mid+1);
            break;
        }
        else if(ar[mid]>k) ma=mid-1;
        else if(ar[mid]<k) mi=mid+1;
    }
    if(mi>ma)
        printf("The value %d not found in the array!\n",k);

}
int main()
{
    char s[30];
    printf("What do you want?\n");
    gets(s);
    if(strcmp(s,"Linear")==0)
        Linearsearch();
    else
        Binarysearch();
}
