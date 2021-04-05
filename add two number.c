#include<stdio.h>
void add();
int main()
{
  add();
}
void add()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("sum is=%d",a+b);
}
