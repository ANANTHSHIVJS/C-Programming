#include<stdio.h>
int main(){
int s,m,e;
float sp,mp,ep,tp;
printf("Marks out of 50");
printf("\n\nEnter the mark of Science : ");
scanf("%d",&s);
printf("Enter the mark of Maths   : ");
scanf("%d",&m);
printf("Enter the mark of English : ");
scanf("%d",&e);
sp=((s/50.0)*100);
mp=((m/50.0)*100);
ep=((e/50.0)*100);
tp=(((s+m+e)/150.0)*100);
printf("\n\nPercentage of science : %.1f",sp);
printf("\nPercentage of Maths   : %.1f",mp);
printf("\nPercentage of English : %.1f",ep);
printf("\nTotal Percentage      : %.1f",tp);

if(sp<33 || mp<33 || ep <33 || tp<40){
    printf("\n\nThe student is FAILED\n");
}

else{
    printf("\n\nThe student is PASSED\n");
}
}
