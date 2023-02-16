#include <stdio.h>

//Write a C-function that takes a positive integer n as argument 
//and outputs a series of numbers according to the following process, until 1 is reached:

//if n is even, then n ← n/2
//if n is odd, then n ← 3*n+1
 
void get_output(int n) {
    while(n>1) {
        printf("%d\n",n);
        if(n%2 == 0) {
            n = n/2;
        }else{
            n = 3*n+1;
        } 
             
    }
    printf("%d\n",1); 
} 

int main(void) {
    int Fib[11] = {0,1,1};
    printf("Fib[1] = %d\n%d\n",Fib[1],1);
    printf("Fib[2] = %d\n%d\n",Fib[1],1);
    for(int i=3; i<11; i++) {
        Fib[i] = Fib[i-1] + Fib[i-2];
        printf("Fib[%d] = %d\n",i,Fib[i]);
        get_output(Fib[i]);
    }
    return 0;
}