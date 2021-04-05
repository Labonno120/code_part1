#include<iostream>
using namespace std;
int main()
{
    long long int t,len,i,j,sum1=0,sum2=0,n;
    cin>> t;
    for(i=0;i<t;i++)
    {
        cin>>len;
        for(j=2;j<=len;j+=2)
        {
            sum1=sum1+j;
        }
        for(j=1;j<=len;j+=2)
        {
            sum2=sum2+j;
        }
        n=(sum1-sum2)+(len-1);
        if(n%2!=0)
        {
            cout<<"YES";
            cout<<endl;
            for(j=2;j<=len;j+=2)
                cout<<j<<" ";
            for(j=1;j<len-1;j+=2)
                cout<<j<<" ";
            cout<<n;
            cout<<endl;
        }
        else
        {
          cout<<"NO";
          cout<<endl;
        }
        sum1=0;
        sum2=0;

    }
}
