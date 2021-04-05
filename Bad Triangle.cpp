#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tst;
    cin>>tst;
    while(tst--)
    {
        ll n;
        bool flag=0;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(ll i=1;i<n-1;i++)
        {
            if(arr[0]+arr[i]<=arr[n-1])
            {
                cout<<"1"<<" "<<i+1<<" "<<n<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"-1"<<endl;
    }
}
