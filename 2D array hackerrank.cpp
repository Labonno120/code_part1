#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[10][10],max=0,ans;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>> arr[i][j];
        }
    }
   max=arr[0][0]+arr[0][1]+arr[0][2]+arr[1][1]+arr[2][0]+arr[2][1]+arr[2][2];

    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
           ans=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
           if(max<=ans)
                max=ans;
                cout<< ans<< endl;
        }
    }
    cout<< max<<endl;
}

