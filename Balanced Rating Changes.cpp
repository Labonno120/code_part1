#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    vector<ll>v;
    vector<ll>vom;
    vector<ll>vop;
    ll n,cnt=0,om=0,op=0,a;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        if(abs(a)%2==1&&a>=0)
            op++;
        else if(abs(a)%2==1&&a<0)
            om++;

    }
    if(op>om)
    {
        ll tm=(op-om)/2;
        for(ll i=0;i<n;i++)
        {
            if(abs(v[i])%2==1&&v[i]>=0&&tm>cnt)
            {
                v[i]=ceil(v[i]/2.0);
               // cout<<"#"<<v[i]<<endl;
                cnt++;
            }
            else
            {
                v[i]/=2;
            }

        }
    }
    else
    {
        ll tm=(om-op)/2;
       // cout<<om<<" "<<op<<endl;
        for(ll i=0;i<n;i++)
        {
            if(abs(v[i])%2==1&&v[i]<0&&tm>cnt)
            {
                v[i]=0-ceil((float)abs(v[i])/2.0);
                //cout<<"#"<<v[i]<<endl;
                cnt++;
            }
            else
            {
                v[i]/=2;
                //cout<<"@"<<v[i]<<endl;
            }
    }
    }
    for(ll i=0;i<n;i++)
        cout<<v[i]<<endl;
}
