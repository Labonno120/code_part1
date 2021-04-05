/*a program to reverse an integer and to find perimeter of a circle.
Bristy Chakraborty
Date:29 september,2020
Dept:ICE*/

#include<stdio.h>
#include<math.h>
#define pi 3.1416

void perimeter(float);
float radius;
int main()
{
    int num,sum=0,p,temp;
    printf("Enter the integer:");
    scanf("%d",&num);
    temp=num;

    while(temp! =0)
    {
      p=temp%10;
      sum=sum*10+p;
      temp=temp/10;
    }
    printf("The answer is:%d\n",sum);
    printf("Enter radius:");
    scanf("%f",&radius);
     perimeter(radius);
}
void perimeter(float radius)
{
    printf("perimeter is:%.2f",2*pi*radius);
}

