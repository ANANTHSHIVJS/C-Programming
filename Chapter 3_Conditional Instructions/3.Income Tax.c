#include<stdio.h>
int main(){
int i,t;
printf("Enter your Income : ");
scanf("%d",&i);
if(i>=250000 || i<500000){
    t=(i*5)/100;
printf("\nThe tax is : %d",t);
}
else if(i>=500000 || i<1000000){
    t=(i*20)/100;
printf("\nThe tax is : %d",t);
}
else if(i>=10000){
    t=(i*30)/100;
printf("\nThe tax is : %d",t);
}
else{
printf("The tax is : 0");
}
}
