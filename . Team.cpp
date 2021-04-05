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
        ll n,k,i,j,c=0;
        cin>>n>>k;
        ll a[n];
        loop(i,n)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<ll>());
        for(i=0,j=n-1;i<=j;i++)
        {
            if(a[i]>=k){
                    //i++;
                    c++;
            }
            //if(i==j)break;
            else {
                    if(i!=j){
                if(a[i]+a[j]>=k){
                        //i++;
                        j--;
                        c++;
                }
                else{
                    j--;
                    i--;
                }
                    }
            }
            if(i==j)break;

        }
        cout<<c<<endl;

    }
}
