```python
# run before each file
from IPython.core.interactiveshell import InteractiveShell
InteractiveShell.ast_node_interactivity = 'all'
```

```python
# tips
dir(list)
help(list.remove)
```





## LEC03 The Monty Hall problem

```python
# ValueError  IndexError  KeyError
try:
  ...
expect___:
  ...
```

```python
'Y'.istitle()
'Y'.lower()
'Y'.startswith(' ')
from random import randrange, choice
```



## LEC04 From decimal expansions to reduced fractions

```python
# get value from tuple using *
def f(a, b):
    return 2 * a, 2 * b
f((1,3))    ---- error
f(*(1,3))   ---- no error

# * has the opposite effect when used in the definition of a function, namely, it makes a tuple out of all arguments 
def f(*x):
    return x * 2
 
f()     ---- ()
f(1)    ---- (1,1)
f(f(1)) ---- ((1,1),(1,1))
f(*f(1))---- (1,1,1,1)
```

