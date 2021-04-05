#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

            if((s[i]-97)==(122-s[j]))count++;
        }
    }
    cout<<count<<endl;
}
