#include<stdio.h>
int main()
{
int a,b,c,i,j,count=0;
scanf("%d%d",&a,&b);
i=a;
j=b;
while(i<=j)
{
    count++;
    i=i*3;
    j=j*2;
}

 printf("%d",count);



}
