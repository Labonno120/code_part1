#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<int>tm1;
        vector<int>tm2;

        ll n,var1,var2,i,j,ans1=0,ans2=0;

        cin>>n;
        ll a[n];
        for(int k=0;k<n;k++ )
            cin>>a[k];
        var1=0;
        if(n==1)
        {
            cout<<"1"<<" "<<a[0]<<" "<<"0"<<endl;
        }
        else{
        for(i=0,j=n-1;i<=j;)
        {

            ll sa=a[i];

            if(i>j)break;

            while(sa<=var1)
            {
                i++;

                if(i>j)break;

                sa+=a[i];

            }

            tm1.push_back(sa);

            var2=sa;


            i++;

            ll sb=a[j];

            if(i>j)break;

            while(sb<=var2)
            {
                j--;

                if(i>j)break;

                sb+=a[j];


            }

            tm2.push_back(sb);
            var1=sb;

            j--;


        }
        for(i=0;i<tm1.size();i++)
            ans1+=tm1[i];
        for(i=0;i<tm2.size();i++)
            ans2+=tm2[i];
            cout<<tm1.size()+tm2.size()<<" "<<ans1<<" "<<ans2<<endl;
        }
    }
}
