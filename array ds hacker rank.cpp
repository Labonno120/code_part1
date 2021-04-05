#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;

    cin>> n;
    int arr_1[n+1],arr_2[n+1];
    for(i=0;i<n;i++)
        cin>>arr_1[i];
    for(j=n-1,k=0;j>=0;j--,k++)
        arr_2[k]=arr_1[j];
    for(i=0;i<n;i++)
        cout<<arr_2[i]<<" ";

}
