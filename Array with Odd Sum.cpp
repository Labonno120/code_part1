#include<iostream>
using namespace std;
int main()
{
    int t,i,j,n,sum=0,odd_num=0,even_num=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        odd_num=0;
        even_num=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
            if(ar[i]%2!=0)odd_num++;
            else even_num++;
        }
        if(sum%2!=0||odd_num>0&&even_num>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        sum=0;

    }
}
