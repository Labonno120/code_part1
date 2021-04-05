#include<iostream>
using namespace std;
int main()
{
    int i,j,cnt_1=0,cnt_0=0,t,n,sum_e=0,sum_o=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)cnt_1++;
            else cnt_0++;
                cout<<"sum_e="<<cnt_0<<endl;
                cout<<"sum_o="<<cnt_1<<endl;
        }
        if(cnt_1>n/2)
        {
            for(j=0;j<n/2;j++)cout<<"1"<<" ";
            cout<<endl;
        }
        else if(cnt_1<n/2)
        {
           for(j=0;j<n/2;j++)cout<<"0"<<" ";
            cout<<endl;

        }
        else
        {
            for(j=0;j<n/2;j++)cout<<"0"<<" ";
            cout<<endl;
        }

        cnt_0=0;
        cnt_1=0;



    }
}
