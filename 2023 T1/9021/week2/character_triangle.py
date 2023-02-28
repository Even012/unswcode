n = input("Enter a strictly positive integer: ")
num = int(n)
# def get_alph():
start = 0 # set start as accumulation
for i in range(num):
    ans = ' '*(num-1-i)
    for j in range(i+1):
        ans += chr((start%26)+65)
        start += 1   
    right = start-1
    for k in range(i):
        right = right-1
        ans += chr((right%26)+65)          
    # ans += ' '*(num-1-i)
    print(ans) 

