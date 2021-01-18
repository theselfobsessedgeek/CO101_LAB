#include<stdio.h>
int main (){
    for (int i = 1; i<=10;i+=2){
         for (int k =10-i;k>0;k--){
                printf(" ");
            }

        for(int j = 0; j<i;j++){
           
            printf("* ");
        } 
        printf("\n");
    }
    printf("\n This output belongs to 2K20/B11/25 Shubham Ahlawat");

    return 0;
}
