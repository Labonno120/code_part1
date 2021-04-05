#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count=0;
    cin>>n;
    int arr[3*n];
    for(i=0;i<(3*n)-3;i++)
    cin>>arr[i];
    sort(arr,arr+(3*n-3));
    for(i=0;i<n;i++)
    {
      if(arr[i]==arr[i+1])count++;

    }
   // cout<<"count="<<count<<endl;
    if(count==n){
            cout<<arr[0]<<endl;
            cout<<arr[1]<<endl;
    }
    else{
    for(j=0;j<3*n-3;j++)
    {


        if(arr[j]==arr[j+1]&&arr[j+1]==arr[j+2]){
                j+=2;
                //cout<<"j1="<<j<<endl;
        }
        else if(arr[j]==arr[j+1]){
                cout<<arr[j]<<endl;
                j++;
                //cout<<"j2="<<j<<endl;
        }
        else if(arr[j]!=arr[j+1]||arr[j+1]!=arr[j+2]) {
                cout<<arr[j]<<endl;
               // cout<<"j3="<<j<<endl;
        }


        }
    }

}
