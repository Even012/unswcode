// Integer Stack ADO tester ... COMP9024 23T1
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main(void) {
   int i, n;
   char str[BUFSIZ];

   StackInit();

   printf("Enter a positive number: ");
   scanf("%s", str);
   if ((n = atoi(str)) > 0) {    // convert to int and test if positive
      for (i = 0; i < n; i++) {
	 printf("Enter a number: ");
	 scanf("%s", str);
	 StackPush(atoi(str));
      }
   }
   while (!StackIsEmpty()) {
      printf("%d\n", StackPop());
   }
   return 0;
}