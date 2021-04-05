#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,i,mx=0,ans;
        vector<int>vc;
        cin>>n;
        string s;
        cin>>s;
        if(n==1){
            cout<<0<<endl;
        }
        else{
        for( i=0;i<n;i++)
        {
            if(s[i]=='A')
                vc.push_back(i);
        }
        if(vc.size()==0)
        {
            cout<<0<<endl;
        }
        else{
        for(int j=0;j<vc.size()-1;j++)
        {
            mx=max(mx,(vc[j+1]-vc[j]-1));
        }
        ans=max(mx,((n-1)-vc[vc.size()-1]));
        cout<<ans<<endl;
        }
        }
    }
}
