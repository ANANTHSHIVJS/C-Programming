#include<stdio.h>
int main(){
int si,p,t,ri;
printf("Enter the Principal        : ");
scanf("%d",&p);
printf("Enter the time             : ");
scanf("%d",&t);
printf("Enter the rate of interest : ");
scanf("%d",&ri);
si=(p*t*ri)/100;
printf("\nThe Simple Interest is     : %d",si);
}
