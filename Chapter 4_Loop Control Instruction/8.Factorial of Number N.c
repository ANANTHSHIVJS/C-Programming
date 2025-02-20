#include<stdio.h>
int main(){
int i,n;
int fact=1;
printf("Enter the factorial number N : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    fact=fact*=i;
}
printf("\nThe factorial value is : %d",fact);
}
