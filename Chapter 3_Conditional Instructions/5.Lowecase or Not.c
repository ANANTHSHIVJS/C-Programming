#include<stdio.h>
int main(){
unsigned char alpha;
printf("Enter the Character : ");
scanf("%c",&alpha);
if(65>=alpha<=90){
    printf("The alphabet is in Uppercase");
}
else if(97>=alpha<=122){
    printf("The alphabet is in Lowercase");
}
}
