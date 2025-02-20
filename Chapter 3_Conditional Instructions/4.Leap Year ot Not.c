#include<stdio.h>
int main(){
int y;
printf("Enter the year : ");
scanf("%d",&y);
if(y%4==0){
    printf("%d is a Leap Year",y);
}
else {
    printf("%d is a Non Leap Year",y);
}
}
