#include<stdio.h>
#include<string.h>
#include<conio.h>

  char* sub(char*,int,int);
  int ind(char*,char*);
  char* INSERT(char*,int ,char*);
  char* DELETE(char*,int,int);
  char* REPLACE(char*,char*,char*);

int main()
{
    char s[80]={"ABCDEFGH"};
    char r1[80],r2[80],r3[80],r4[80],r5[80],r6[80];
    printf("String = %s\n",s);
    strcpy(r1,INSERT(s,3,"XYZ"));
    strcpy(r2,INSERT(s,6,"XYZ"));
    printf("INSERTED : First = %s // Second = %s\n",r1,r2);
    strcpy(r3,DELETE(s,4,2));
    strcpy(r4,DELETE(s,2,4));
    printf("DELEDED : First42 = %s // Second24 = %s\n",r3,r4);
    strcpy(r5,REPLACE("XABYABZ","AB","C"));
    strcpy(r6,REPLACE("XABYABZ","BA","C"));
    printf("REPLACED : First = %s // Second = %s\n",r5,r6);

}
char* INSERT(char* s1,int k,char* s2)
{
    char res[80];
    strcpy(res,sub(s1,1,k-1));
    strcat(res,s2);
    strcat(res,sub(s1,k,strlen(s1)-k+1));
    return (res);
}
char* DELETE(char* s1,int k,int l)
{
    char res[80];
    strcpy(res,sub(s1,1,k-1));
    strcat(res,sub(s1,k+l,strlen(s1)-k-l+1));
    return (res);
}
char* REPLACE(char* s1,char* s2,char* s3)
{
    int k;
    char res1[80],res2[80];
    if(ind(s1,s2)!=-1)
    {
        k=ind(s1,s2)+1;

    }
    else return (s1);
    strcpy(res1,DELETE(s1,k,strlen(s2)));
    strcpy(res2,INSERT(res1,k,s3));
    return (res2);
}
char *sub(char *str,int i,int j)
{
    int k,m=0;
    char res[80];
    for(k=i-1;k<=i+j-2;k++)
    {
        res[m]=str[k];
        m++;
    }
    res[m]='\0';
    return (res);
}
int ind(char *str1,char *str2)
{
    int m,n;
    int index,flag;
    for(m=0;m<strlen(str1);m++)
    {
        index=m;
        flag=1;
        for(n=0;n<strlen(str2);n++)
        {
            if(str1[m+n]==str2[n])
                ;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==0) continue;
        else return (index);
    }
    if(m==strlen(str1)) return -1;
}
