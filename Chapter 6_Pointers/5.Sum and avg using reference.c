/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/

#include<stdio.h>
int sum(int m, int n){
int sum=(m+n);
return;
}
float avg(int m, int n){
float avg=(m+n)/2;
return;
}
int main(){
int m,n;
printf("\nEnter the first number : ");
scanf("%d",&m);
printf("\nEnter the second number : ");
scanf("%d",&n);
printf("\nThe sum is : %d",sum(m,n));
printf("\nThe avg is : %.2f",avg(m,n));
}
