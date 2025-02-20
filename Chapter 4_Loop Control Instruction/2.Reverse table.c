#include<stdio.h>
int main(){
int n;
printf("Enter the value of N : ");
scanf("%d",&n);
int i;
for(i=10;i>=1;i--){
        printf("\n%d * %d = %d",i,n,i*n);
}
}
