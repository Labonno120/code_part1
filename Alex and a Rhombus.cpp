#include<iostream>
using namespace std;
int main()
{
    int n,ans=1,p=4;
    cin>>n;
    while(n!=1)
    {
        ans+=p;
        p+=4;
        n--;
    }
    cout<<ans<<endl;
}
