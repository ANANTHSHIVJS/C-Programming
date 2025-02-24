//Write a function to convert Celsius temperature into Fahrenheit.
float f;
#include<stdio.h>
void far(int c){
f=(c*9/5)+32;
printf("\nThe Fahrenheit value is : %f",f);
}
int main(){
int c;
printf("Enter the Celsius value :");
scanf("%d",&c);
far(c);
}

