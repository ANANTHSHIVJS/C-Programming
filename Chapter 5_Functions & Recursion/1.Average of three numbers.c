//Write a program using function to find average of three numbers.

#include<stdio.h>
void avg(int a, int b, int c){
int x=(a+b+c)/3;
printf("\nThe average value is : %d\n",x);
}
int main(){
int a,b,c;
printf("Enter the first number  : ");
scanf("%d",&a);
printf("Enter the second number : ");
scanf("%d",&b);
printf("Enter the first number  : ");
scanf("%d",&c);
avg(a,b,c);
}
