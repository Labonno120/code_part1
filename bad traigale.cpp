#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,m,p,count=0,b;
    cin>>t;
    for(p=0;p<t;p++)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
         for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {
                for(m=k+1;m<=n;m++)
                {
                    if(a[j]+a[k]<=a[m]&&j<k&&k<m)
                        {
                        cout<<j<<" "<<k<<" "<<m<<endl;
                        //count++;

                          break;

                        }

                }
                if(b==1)
                    break;

            }
            if(b==1)
                break;
       }

        //cout<<count<<endl;
        if(count==0)
            cout<<"-1"<<endl;
    }
}
