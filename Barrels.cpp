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
        ll n,k,mx;
        cin>>n>>k;
        ll arr[n];
        loop(i,n)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ///loop(i,n)
        ///cout<<arr[i]<<" ";
        mx=arr[n-1];
        for(int i=n-2;i>=n-k-1;i--)
        {
           mx+=arr[i];
        }
        cout<<mx<<endl;
    }
}
