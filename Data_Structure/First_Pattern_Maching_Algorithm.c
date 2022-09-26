#include<stdio.h>
#include<conio.h>
int main()
{
    char p[80]={"bab"};
    char t[80]={"aabbbabb"};
    int r,s,k,l,i,max,ind;
    r=strlen(p);
    s=strlen(t);
    k=0,max=s-r;
    while(k<=max)
    {
        for(i=0;i<r;i++)
        {
           if(p[i]!=t[k+i]) break;
        }
        if(i==r)
        {
            ind=k; break;
        }
        else k++;
    }
    if(k>max) ind=-1;
    printf("P = %s\n",p);
    printf("T = %s\n",t);

    if(ind!=-1)
        printf("\nIndex in P in T is %d\n",ind);
    else
        printf("\nP does not found in T\n");
    return 0;
}
