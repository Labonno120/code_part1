

//first add the cubes of the digit in a number
//if the sum is same to number then it is armstrong number
#include<stdio.h>
void master();
int main(){
int temp, num, r, sum = 0;

printf("Enter a number : ");
scanf("%d", &num);

temp = num;

while(temp!=0){
  r = temp % 10;
  sum = sum + r * r * r;
  temp = temp/ 10;
}
if(sum == num){
    printf("%d is armstrong", sum);
}
else{
  printf("%d is not armstrong", sum);
  }
  master();

}


//finding armstrong number between more.

master(){
int tem, initial, finalNumber, r, sum = 0, i;

printf("\nInitial Number: ");
scanf("%d", &initial);

printf("\nFinal Number: ");
scanf("%d", &finalNumber);
for(i = initial; i <= finalNumber; i++){
  tem = i;

while(tem!=0){
  r = tem % 10;
  sum = sum + r * r * r;
  tem = tem/ 10;
}

//sum = 0;

if(sum == i){
    printf("%d ", i);
}
sum=0;

}
}
