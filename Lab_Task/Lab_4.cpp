#include<iostream>
using namespace std;
void subtask_1()
{
    int n; cin>>n;
    if(n%2==0)
        cout<<n<<" is even number"<<endl;
    else
        cout<<n<<" is odd number"<<endl;
}
void subtask_2()
{
    int a,b; cin>>a>>b;
    if(a>b) cout<<a<<">"<<b<<endl;
    else if(a<b) cout<<a<<"<"<<b<<endl;
    else cout<<a<<"="<<b<<endl;

}
int main()
{
    cout<<"Sub task-1 : "<<endl;
    subtask_1();
    cout<<"Sub task-2 : "<<endl;
    subtask_2();
    return 0;
}
