#include<stdio.h>
#include<math.h>
int main(){
int d,n,r;
printf("Enter the Divident : ");
scanf("%d",&d);
printf("Enter the Divisor : ");
scanf("%d",&n);
r=d%n;
if(r==0){
    printf("Reminder is : %d\nNumber is Divisible",r);
}
else{
    printf("Reminder is : %d\nNumber is not Divisible",r);
}
}
