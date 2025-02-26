/*Write a program to print the address of a variable. Use this address to get the
value of the variable.*/

#include<stdio.h>
int main(){
int age=23;
printf("\nAddress of age : %d",&age);
printf("\nValue stored in address is : %d",age);
}
