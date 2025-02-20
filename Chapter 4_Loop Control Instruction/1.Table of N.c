#include<stdio.h>
int main(){
int n;
printf("Enter the value of N : ");
scanf("%d",&n);
int i;
for(i=1;i<=10;i++){
        printf("\n%d * %d = %d",i,n,i*n);
}
}
