#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,sum=0,sum1=0,sum2=0,mx=INT_MIN;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]>=0)sum1+=a[i];
            else sum2+=abs(a[i]);
        }
        sort(a,a+n);
        if(sum==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(sum1>sum2){
                for(ll j=n-1;j>=0;j--)
                    cout<<a[j]<<" ";
                cout<<endl;
            }
            else
            {
                for(ll j=0;j<n;j++)
                    cout<<a[j]<<" ";
                cout<<endl;
            }

        }
    }
    return 0;
}
