#include <stdio.h>

int main(){
    int i=6,j=8,x,y;
    // int z = i++ + (++j + (++i+i))+j ;

    x= i >> 2;
    y = j<<2;

    printf("%d",y);

    return 0; 

}