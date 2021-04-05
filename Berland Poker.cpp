#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if(m>n/k)
        {

            if((m-(n/k))<=k-1)
                cout<<(n/k)-1<<endl;
            else{
            if((m-n/k)%(k-1)!=0)
                ans=(n/k-((m-n/k)/(k-1)+1));
            else
                ans=n/k-((m-n/k)/(k-1));
            cout<<ans<<endl;
            }
        }
        else
            cout<<m<<endl;
    }
}
