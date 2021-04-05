#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    tc(t)
    {
        ll n,tst=1;
        vector<ll>v1;
        vector<ll>v2;
        cin>>n;
        ll a[2*n];
        for(ll i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+2*n);
        if(n%2!=0){
        for(ll i=0;i<2*n;i++)
        {
            if(tst==1)
            {
                v1.push_back(a[i]);
                tst=2;
            }
            else
            {
                v2.push_back(a[i]);
                tst=1;
            }
        }

        cout<<abs(v1[n/2]-v2[n/2])<<endl;
        }
        else{
            for(ll i=1;i<2*n-1;i+=2)
            {
                v1.push_back(a[i]);
            }
            for(ll i=0;i<2*n+1;i+=2)
            {
                v2.push_back(a[i]);
            }
            v2.push_back(a[2*n-1]);
           cout<<abs(v1[(n-1)/2]-v2[(n+1)/2])<<endl;
        }



    }
}


