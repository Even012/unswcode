

Primitive operations:

- Expression ( Comparision , not counting the assignment) only simple operations allowed

- indexing

- calling or returning 



### Length of arr

#### Initializaion

```c
char arr[4] = {'1','2','3','4'};        // your array
char arr[5] = {'1','2','3','4','\0'};   // safer
char arr[]  = {'1','2','3','4','\0'};   // safer again
char arr[]  = "1234";                   // safer and easier
```

#### How to get the length

```c
int a[17];
size_t n = sizeof(a)/sizeof(a[0]);
```

#### Uninitialised variables

```c
int main(void) {
    // note the length of the array = 2
    int arr_five[] = {0, 0};

    printf("Array content:\n");
    // but I can still (try and) read beyond the 
    // end of the array ...
    // this is more "undefined behaviour" territory
    for(int i=0; i<5; i++) {
        printf("%d", arr_five[i]);
      	printf("\n");
    };
    
    return 0;
}
```

