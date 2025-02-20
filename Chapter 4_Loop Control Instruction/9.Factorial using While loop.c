#include<stdio.h>
int main(){
int n,i=1;
int fact=1;
printf("Enter the factorial number N : ");
scanf("%d",&n);
while(i<=n){
    fact*=i;
    i++;
}
printf("\nThe factorial value is : %d",fact);
}

