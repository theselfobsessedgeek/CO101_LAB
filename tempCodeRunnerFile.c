#include <stdio.h>
int main()
{
    int num1, num2;  	//input variables
    int sum=0;		//output variables
    float avg=0.0;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    sum= num1+num2;
    avg=(float)(num1+num2)/2;				//or can use (num1+num2)/2.0
    //%.2f is used for displaying output upto two decimal places
    printf("Sum of %d and %d is: %d \t",num1,num2,sum);
    printf("Average of %d and %d is: %.2f\n",num1,num2,avg);
    printf("This output belongs to 2K20/B11/25 Shubham Ahlawat ");
    return 0;
}