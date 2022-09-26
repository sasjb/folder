#include<iostream>
using namespace std;
int subtask_1()
{
    int a,b,c; cin>>a>>b>>c;
    int sum=a+b+c;//summition of a,b,c
    return sum;
}
int subtask_2()
{
    int n; cin>>n;
    int sum=0,a;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        sum+=a;//Adding all the value while n
    }
    return sum;
}
int main()
{
    cout<<subtask_1()<<endl;//Calling the function subtask_1
    cout<<subtask_2()<<endl;//Calling the function subtask_2
    return 0;
}
