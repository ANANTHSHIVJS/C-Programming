/*Try problem 3 using call by value and verify that it does not change the value of
the said variable. */

#include<stdio.h>
int ten(int n){
int ten=n*10;
}
int main(){
int n;
printf("\nEnter the number : ");
scanf("%d",&n);

printf("\nTen times the number : %d",ten(n));
printf("\nValue of n is : %d",n);
}
