#include<iostream>
using namespace std;
int main()
{
    int n,i,maxi_num;
    cin>> n;
    if(n%2==0)
    {
        maxi_num=n/2;
        cout<<maxi_num<<endl;
        for(i=0;i<maxi_num;i++)
            cout<<"2"<<" ";
            cout<<endl;

    }
    else
    {
        maxi_num=n/2;
        cout<<maxi_num<<endl;
        for(i=0;i<maxi_num-1;i++)
            cout<<"2"<<" ";
            cout<<"3"<<endl;

    }
}
