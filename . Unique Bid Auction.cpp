
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
    tc(t){
        bool flag=0;
    ll n,tm,tn;
    map<int,int>mp;
    vector<int>vc;
    cin>>n;
    int a[n],mn=INT_MAX;
    loop(i,n)
    {
        cin>>a[i];
        mp[a[i]]++;

    }
   //
    //sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]]==1)
        {
         vc.push_back(a[i]);
         vc.push_back(i+1);

        }
    }
    for(int i=0;i<vc.size();i+=2)
    {
     if(vc[i]<mn)
     {
         mn=vc[i];
         tn=i;
     }
    }

    if(vc.size()==0)
        cout<<"-1"<<endl;
    else
       {
           cout<<vc[tn+1]<<endl;
       }
    }
}
