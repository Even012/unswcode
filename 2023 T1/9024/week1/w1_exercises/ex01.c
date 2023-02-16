#include <stdio.h>
#include <stdlib.h>

//There is a 5-digit number that satisfies 4·abcde = edcba, 
//that is, when multiplied by 4 yields the same number read backwards. Write a C-program to find this number.
//Hint: Only use arithmetic operations; do not use any string operations.
#define MIN 10000
#define MAX 24999  
int main(void) {

    int a,b,c,d,e;
    for(int n=MIN; n<=MAX; n++){
        a = (n/10000)%10;
        b = (n/1000)%10;
        c = (n/100)%10;
        d = (n/10)%10;
        e = n%10;
        if(n*4 == a+10*b+100*c+1000*d+10000*e) {
            printf("The answer is: %d.\n",n);
        }
    }
    
    return 0;
    
}