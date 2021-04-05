#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,mn1,mn,sum=0;
    cin>>a>>b>>c>>d;
    mn1=min(a,c);
    mn=min(mn1,d);
    sum+=(mn*256);
    sum+=(32*(min(a-mn,b)));
    cout<<sum<<endl;
}
