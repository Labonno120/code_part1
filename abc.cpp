#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    tc(t)
    {
        ll n,x,sum=0,sum1=0;
        cin>>n>>x;
        ll a[n];
        loop(i,n)
        {
            cin>>a[i];
            if(a[i]%x==0)
            sum1+=(a[i]/x);
            else sum1+=((a[i]/x)+1);
            sum+=a[i];
        }
        if(sum%x==0)
        cout<<sum/x<<" "<<sum1<<endl;
        else
        cout<<(sum/x)+1<<" "<<sum1<<endl;
    }
}
