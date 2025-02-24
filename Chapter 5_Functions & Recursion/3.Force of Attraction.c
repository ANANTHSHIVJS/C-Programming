//Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2.
#include<stdio.h>
float g=9.8;
void foa(int m){
float f;
f=m*g;
printf("\nForce of Attraction : %.2f\n",f);
}
int main(){
float m;
printf("Enter the Mass : ");
scanf("%f",&m);
foa(m);
}
