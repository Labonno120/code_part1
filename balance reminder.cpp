#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    tc(t)
    {
        ll n,d,c0=0,c1=0,c2=0,n0=0,n1=0,n2=0,g0=0,g1=0,g2=0,c=0,nibe0,nibe1,nibe2,dibe0,dibe1,dibe2;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%3==0)c0++;
            else if(a[i]%3==1)c1++;
            else c2++;
        }
        d=n/3;
        if(c0<d){n0=1;
        nibe0=d-c0;}
        else if(d<c0){ g0=1;
        dibe0=c0-d;}
        if(c1<d){n1=1;
        nibe1=d-c1;}
        else if(d<c1) {g1=1;
        dibe1=c1-d;}
        if(c2<d){n2=1;
        nibe2=d-c2;}
        else if(c2>d){ g2=1;
        dibe2=c2-d;}

        if(n0==1&&g1==1){
            c+=(min(dibe1,nibe0)*2);
        }
        if(n0==1&&g2==1){
            c+=(min(dibe2,nibe0)*1);
        }
        if(n1==1&&g0==1){
            c+=(min(dibe0,nibe1)*1);
        }
        if(n1==1&&g2==1){
            c+=(min(dibe2,nibe1)*2);
        }
        if(n2==1&&g0==1)
        {
            c+=(min(dibe0,nibe2)*2);
        }
        if(n2==1&&g1==1)
        {
            c+=(min(dibe1,nibe2)*1);

        }

        cout<<c<<endl;
    }
}

