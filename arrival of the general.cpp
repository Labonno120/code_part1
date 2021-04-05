#include<iostream>
using namespace std;
int main()
{
    int n,i,p,q,r,max,min,j,k;
    int arr[100];
    cin>> n;
    for(i=0;i<n;i++)
    {
        cin>> arr[i];
    }

    max=arr[0];
    for(j=0;j<n;j++)
    {
      if(max<arr[j])
            max=arr[j];
    }
    min=arr[0];
    for(k=1;k<n;k++)
    {
      if(min>arr[k])
            min=arr[k];
    }
    for(j=n;j>=0;j--)
    {
      if(arr[j]==max)
        p=j;
    }

    for(k=0;k<n;k++)
    {
      if(arr[k]==min)
       q=k;
    }
    if(p>q)
    r=((n-1-q)+p)-1;
    else
        r=(n-1-q)+p;

    //cout<< max<< endl;
    //cout<< min<< endl;
    //cout<< p<< endl;
    //cout<<q<< endl;
    cout<< r<< endl;



}
