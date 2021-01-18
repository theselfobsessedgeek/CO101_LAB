#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
    // Intializing the variables 
    int n = 0 ;
    bool isPrime = true;
    //Taking input
    printf("enter a number: ");
    scanf("%d",&n);

    //working code

    /* ------tackling a corner-case-----
    
     Since 1 is not prime and the boolean would take it as
     prime since isPrime is initialised as true)

    */
    if (n==1) isPrime = false;      

   /* ----for any other number----
        We would iterate the loop from 2 to square root of n
        and then check the divisibility of n against the counter of the loop
        If n is divisible by any number from 2 to square root of n
        the number is not prime and it will exit from the loop
   */ 
    for (int i=2 ; i<=sqrt(n);i++ ){
        if(n%i==0){
            isPrime = false;
            printf(" %d is not a prime number. \n",n);
            break;
        }
    }

    // to print the final result
    if(isPrime){
        printf(" %d is a prime number. \n",n);
    }
    
    printf("This output belongs to Shubham Ahlawat 2K20/B11/25.");
}