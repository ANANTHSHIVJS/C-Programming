#include<stdio.h>
int main(){
int n,i;
int c=0;
printf("Enter the number to get checked : ");
scanf("%d",&n);
    for(i=1;i<=n;i++){
if(n%i==0){
    c++;
    }
}
if(c<=2){
    printf("\nCounter value of multiples : %d",c);
    printf("\n%d is a prime number\n",n);

}
else if(c>2){
    printf("\nCounter value of multiples : %d",c);
    printf("\n%d is not a prime number\n",n);
}
}

