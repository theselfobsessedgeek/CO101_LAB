#include<stdio.h>

int main(){
    int principal = 0, rate = 0, time = 0;
    printf("enter the principal amount : ");
    scanf("%d",&principal);
    printf("enter the rate of interest : ");
    scanf("%d",&rate);
    printf("enter the time : ");
    scanf("%d",&time);
    float si = principal*rate*time/100;

    printf("The simple interest is %f",si);
    printf("\n This output belongs to 2K20/B11/25 Shubham Ahlawat");

    return 0;
    
}