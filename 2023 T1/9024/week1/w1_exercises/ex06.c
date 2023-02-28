#include <stdio.h>


int getmax(int a, int b, int c) {
    int temp;
    temp = (a >= b)*a + (a < b) * b;
    return (temp >= c)*temp + (temp < c) * c;
}

int main(void) {
    int ans = getmax(5,2,3);
    printf("%d\n",ans);
    return 0;
}
