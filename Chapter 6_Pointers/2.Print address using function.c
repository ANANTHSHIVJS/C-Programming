/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?*/

#include<stdio.h>
int func(int i){
printf("\nAddress of i in func : %p",&i);
}
int main(){
int i;
printf("\nAddress of i in main : %p",&i);
func(i);
}
