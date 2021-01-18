#include <stdio.h>
int main()
{
    int a[10];
    for(int i=0 ;i<10;i++ ){
        printf("enter the %d th element :",i);
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0 ;i<10;i++ ){
        if (a[i]>max){
            max=a[i];
        }
    }
    
    printf("The maximum number is %d",max);
    printf("\n This output belongs to 2K20/B11/25 Shubham Ahlawat");

return 0;
}