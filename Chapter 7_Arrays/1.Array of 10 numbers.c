#include<stdio.h>
int main(){
int arr[10];
for(int i=0;i<10;i++){
    printf("Enter the %d th element : ",i);
    scanf("%d",&arr[i]);
    }
for(int i=0;i<10;i++){
    printf("\nThe %d th element : %d",i,arr[i]);
    }

}
