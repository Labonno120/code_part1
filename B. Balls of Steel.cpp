

    #include<iostream>
    #include<bits/stdc++.h>
    #define ll long long int
    #define loop(i,n) for(int i=0;i<n;i++)
    #define out_y cout<<"YES"<<endl;
    #define out_n cout<<"NO"<<endl;
    #define tc(t) int t;cin>>t;while(t--)
    #define c(n) int n;int a[n];loop(i,n)cin>>a[i];
    using namespace std;
    int main()
    {
        tc(t)
        {
            ll n,k,mark=0,cnt=0;
            ll tm;
            vector<ll>vc;
            cin>>n>>k;
            ll a[2*n];
            loop(i,2*n)
            {
                cin>>a[i];
            }
            for(ll i=0;i<2*n;i+=2)
            {
                for(ll j=0;j<2*n;j+=2)
                {
                    tm=abs(a[j]-a[i])+abs(a[j+1]-a[i+1]);
                    vc.push_back(tm);
                    //cout<<"tm="<<tm<<endl;

                }
            }
            //cout<<cnt<<endl;
            loop(i,vc.size())
            {
                if(vc[i]>k)
                {
                   mark=1;
                   break;
                }
            }
            if(mark)cout<<"1"<<endl;
            else cout<<"-1"<<endl;
        }
    }
