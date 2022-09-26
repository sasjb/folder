#include<stdio.h>
#include<string.h>
void substr()
{
    getchar();
    char s[100];
    gets(s);
    int a,b;
    scanf("%d%d",&a,&b);
    int i,m=0;
    char ster[100];
    for(i=a-1;i<=a+b-2;i++)
    {
        ster[m]=s[i];
        m++;
    }
    printf("SUBSTRING(s,%d,%d) = %s\n",a,b,ster);
}
void findpattern()
{
    getchar();
    char s[100],p[100];
    gets(s);
    gets(p);
    int i,j,index,flag;
    for(i=0;i<strlen(s);i++)
    {
        index=i;
        flag=1;
        for(j=0;j<strlen(p);j++)
        {
            if(s[i+j]==p[j])
                continue;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            continue;
        else
        {
            printf("INDEX = %d\n",index);
            return 0;
        }
    }
    if(i==strlen(s))
        printf("The pattern not match.\n");
}
void findlenth()
{
    getchar();
    char s[100];
    gets(s);
    int len=strlen(s);
    printf("Length = %d\n",len);
}
void concat()
{
     getchar();
     char s1[100];
     char s2[100];
     gets(s1);
     gets(s2);
     printf("Concated String = %s\n",strcat(s1,s2));
}

int main()
{
    printf("For finding substring Press 1\n");
    printf("For finding Pattern Press 2\n");
    printf("For finding Length Press 3\n");
    printf("For Concatenated two string Press 4\n");
    printf("Stop the programme Press 0\n");
    int n;
    while(scanf("%d",&n))
    {
       if(n==1)
       {
           substr();
       }
       else if(n==2)
       {
           findpattern();
       }
       else if(n==3)
       {
           concat();
       }
       else if(n==4)
       {
           findlenth();
       }
       else if(n==0) break;
    }
    return 0;
}
