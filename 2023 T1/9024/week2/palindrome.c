/** Algorithm & Complexity Analysis

* isPalindrome(char A[], int len):

* input: string A of length len
* output: true or false

* Statement                                #primitive operations
* --------------------------------------------------------------
* int j = 0
* for i=len-1 down to 1 do                  (n-1)+n   
*     B[j] = A[i]                            n-1   
*     j = j+1                                n-1
* end for
* if A == B then                             n
*     return true                            1
* else do
*     return false                           1
* end if 
* ---------------------------------------------------------------
*                                      Total  5n-2, which is O(n)
**/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool isPalindrome(char A[], int len) { 
    char B[len];
    int j = 0;
    for (int i = len-1; i >= 0; i--) {
        B[j] = A[i];
        j++;
    }
    if (strcmp(A, B) == 0) {
        return true;
    } else {
        return false;
    }
}

int main(void) {
    char A[BUFSIZ];
    printf("Enter a word: ");
    scanf("%s",A); 
    bool x = isPalindrome(A, strlen(A));  
    if (x == true) {
        printf("%s\n", "yes");
    } else {
        printf("%s\n", "no");
    }
    return 0;
}
