L = [4, 14, 14, 5, 12, 11, 13, 16, 3, 17, 3, 2, 14, 8, 1, 6, 10, 7]
n = 3
L2 = [n]
for i in range(len(L)):
    if L[i] == n:
        pos = i
        break

val = n
for i in range(len(L)):
    j = (pos + i) % len(L)
    if L[j] > val:
        L2.append(L[j])
        val = L[j]
print(L2)