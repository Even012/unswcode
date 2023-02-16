### LEC1

```python
# copy file
cp fahrenheit_to_celsius.py celsius_to_fahrenheit.py

# view file
cat fahrenheit_to_celsius.py

# write file
%%writefile celsius_to_fahrenheit.py

# / and //
12/5
12//5

# input
input('Feed the seed with an integer: ')
int(input('Feed the seed with an integer: '))

# seed and randint
from random import seed, randint
randint(0, 100)

# List
L = [0] * 3 + [1] * 7 + [0] * 3
L_as_str = [str(i) for i in L]
dir(list)

# join can be accept list and generator
L = [1,4,5,6]
print('|'.join([str(e) for e in L]))
print('|'.join(str(e) for e in L)) **bet
```



### LEC2

```python
# file_handle is a generator 
with open('division_by_2.txt') as file_handle:
  	# next function will list content line by line
    next(file_handle)
    next(file_handle)
    next(file_handle)
# so we can do for loop
with open('division_by_2.txt') as file_handle:
    for e in file_handle:
        print(e)
```

