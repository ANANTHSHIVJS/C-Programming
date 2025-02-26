//Write a function and pass the value by reference.
#include<stdio.h>
int val(int *m){
printf("\nThe passed value of m : %d",*m);
printf("\nThe passed address of m : %p",m);
}
int main(){
int m=143;
val(&m);
}
