#include<stdio.h>
int main(){
    int a,b,c,d;
    float mean;
    printf("enter the prog :");
    scanf("%d",&a);
    printf("enter the english :");
    scanf("%d",&b);
    printf("enter the physics :");
    scanf("%d",&c);
    printf("enter the math :");
    scanf("%d",&d);
    mean=(a+b+c+d)/4.0;
    printf("%f",mean);
    return 0;
}