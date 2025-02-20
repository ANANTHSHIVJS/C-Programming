#include<stdio.h>
int main(){
int a,b,c,d,l=1;
printf("Enter the first number  : ");
scanf("%d",&a);
printf("Enter the second number : ");
scanf("%d",&b);
printf("Enter the third number  : ");
scanf("%d",&c);
printf("Enter the forth number  : ");
scanf("%d",&d);
switch(l){
case 1:
    if(a>b && a>c && a>d){
        printf("\n%d is Largest Number\n",a);
        break;
    }
case 2:
    if(b>a && b>c && b>d){
        printf("\n%d is Largest Number\n",b);
        break;
    }
case 3:
    if(c>a && c>b && c>d){
        printf("\n%d is Largest Number\n",c);
        break;
    }
case 4:
    if(d>a && d>c && d>b){
        printf("\n%d is Largest Number\n",d);
        break;
    }
}
}

