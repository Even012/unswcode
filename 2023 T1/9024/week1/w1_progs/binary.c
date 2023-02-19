// Integer Stack ADO tester ... COMP9024 23T1
#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

int main(void) {
   int n;
   char str[BUFSIZ];

   StackInit();

   printf("Enter a number: ");
   scanf("%s", str);
   n = atoi(str);
   while(n>0) {
      StackPush(n%2);
      n = n/2;
   }

   while (!StackIsEmpty()) {
      printf("%d",StackPop());
   }
   printf("\n");
   return 0;
}