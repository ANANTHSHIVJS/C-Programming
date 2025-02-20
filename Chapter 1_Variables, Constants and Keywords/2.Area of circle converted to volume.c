#include<stdio.h>
#include<math.h>
int main(){
int r,a,h,v;
printf("Enter the radius : ");
scanf("%d",&r);
a=3.14*r*r;
printf("The area is : %d\n",a);
printf("\nEnter the height : ");
scanf("%d",&h);
v=a*h;
printf("The volume is : %d",v);
}
