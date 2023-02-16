// Greatest common divisor ... COMP9024 23T1

#include <stdio.h>

int f(int m, int n) {

   while (m != n) {
      if (m > n)
	 m = m-n;
      else
	 n = n-m;
   }
   return m;
}

int main(void) {

   printf("%d\n", f(30,18));
   return 0;
}