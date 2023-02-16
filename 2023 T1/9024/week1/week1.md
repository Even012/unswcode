# Lec01

### Course Schedule

| Elementary data structures and algorithms in C | week 1   |
| ---------------------------------------------- | -------- |
| Analysis of algorithms                         | week 2   |
| Dynamic data structures                        | week 3   |
| Graph data structures and algorithms           | week 4-5 |
| Flexibility week and mid-term exam             | week 6   |
| Search tree data structures and algorithms     | week 7-8 |
| String algorithms                              | week 9   |
| Randomised algorithms, Ethics, Course review   | week 10  |

### Assessment

| **Component**                                                | **Maximum Mark** |
| ------------------------------------------------------------ | ---------------- |
| Weekly Exercises (weekly; weeks 2-5, 7-10)                   | 8 × 2 = 16       |
| Midterm Exam (Online exam, Thursday Week 6 - during class time) | 12               |
| Assignment (released Friday Week 5, due Tuesday Week 10)     | 12               |
| Final Exam (exam period, invigilated)                        | 60               |

# Lec02

## Algorithms in C

### assignments

```c
k++;
n = k++;

++k;
n = --k;
```

### conditionals

```c
// an expression evaluates to 1 if true, and to 0 if false
if (expression){
  some statements1;
}else{
  some statements2;
}
```

### loops

- while loop

```c
// while loop         
while (expression) {
    some statements; 
}
// do .. while loop
do {
   some statements;   
} while (expression);
```



- for loop

### function calls/return statements



## Data Structures in C

### Basic Data Types

- char 
- int
- float
- Double

```c
float x;
char ch = 'A';
int j = i;
```

### Aggregate Data Types: array&string struct

- **arrarys** : homogeneous … all elements have same base type

- **Structures**  : heterogeneous … elements may combine different base types

```x
int a[20];
char b[10];
```

```c
#define MAX 20

int i;           // integer value used as index
int fact[MAX];   // array of 20 integer values

fact[0] = 1;
for (i = 1; i < MAX; i++) {
    fact[i] = i * fact[i-1];
}
```

- String is a special word for an array of characters

  End- of - string is denoted by '\0'

- Scanf and atoi

```c
#include <stdio.h>   // includes definition of BUFSIZ (usually =512) and scanf()
#include <stdlib.h>  // includes definition of atoi()

...

char str[BUFSIZ];
int n;

printf("Enter a string: ");
scanf("%s", str);
n = atoi(str);
printf("You entered: \"%s\". This converts to integer %d.\n", str, n);
```

### prototype

```c
typedef ExistingDataType NewDataType;

typedef float Temperature;
typedef int Matrix[20][20];

typedef struct {
  char name[30];
  int zID;
} StudentT;
```

```c
#define NUM_TICKETS 1500

typedef struct {…} TicketT;

TicketT tickets[NUM_TICKETS];  // array of structs

// Print all speeding tickets in a readable format
for (i = 0; i < NUM_TICKETS; i++) {
    printf("%s %6.2f %d/%d at %d:%d\n", tickets[i].plate,
                                        tickets[i].speed,
                                        tickets[i].d.day,
                                        tickets[i].d.month,
                                        tickets[i].t.hour,
                                        tickets[i].t.minute);
}

// Sample output:
//
// DSA42X  68.40 2/6 at 20:45
```



## Data Abstraction

### Abstract Data Types

Users of the ADT see only the *interface*

