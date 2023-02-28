

## Lec03 Algorithm Analysis

### Empirical Analysis

implement the code and plot the process

### Theoretical Analysis

#### Pseudocode

#### Primitive operations:

- Expression ( Comparision , not counting the assignment) only simple operations allowed

- indexing

- calling or returning 

#### Example

```c
arrayMax(A):
|  Input  array A of n integers
|  Output maximum element of A
|
|  currentMax=A[0]                   1
|  for all i=1..n-1 do               n+(n-1)
|  |  if A[i]>currentMax then        2(n-1)
|  |     currentMax=A[i]             n-1
|  |  end if
|  end for
|  return currentMax                 1
                                     -------
                             Total   5n-2
```

```c
matrixProduct(A,B):
|  Input  n×n matrices A, B
|  Output n×n matrix A·B
|
|  for all i=1..n do                     2n+1
|  |  for all j=1..n do                  n(2n+1)
|  |  |  C[i,j]=0                        n2
|  |  |  for all k=1..n do               n2(2n+1)
|  |  |     C[i,j]=C[i,j]+A[i,k]·B[k,j]  n3·4
|  |  |  end for
|  |  end for
|  end for
|  return C                              1
                                         ------------
                                 Total   6n3+4n2+3n+2
```



## Lec04 Big O notation

### Binary search Analysis

worst case: devide the length of arrary by 2 for logn times

### dynamic store ---- link list

```c
mylist=makeNode(1)
mylist.next=makeNode(42)
(mylist.next).next=makeNode(9024)
```





## WIL

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

## w2 ex

#### 01 (Counting primitive operations)

```c
  for all i=n down to 1 do								--- n+(n+1)
      for all j=n down to i do						--- 3 + 5 + ... + (2n+1)= n(n+2)
          print "A[i]A[j]"								--- n + ()
      end for
  end for

    
/*    
for(int j = n; j >= i; j--)
-----------------------------  
i     j compare   j--
n     2reps        1reps      
n-1   3            2
...
1     n+1          n

*/   
    
```

