#include <stdio.h>
#include <stdlib.h>
// typedef ExistingDataType NewTypeName;

int main(void) {

    char str[BUFSIZ];
    int n;

    printf("Enter a string: ");
    scanf("%s", str);
    n = atoi(str);
    printf("You entered: \"%s\". This converts to integer %d.\n", str, n);
}