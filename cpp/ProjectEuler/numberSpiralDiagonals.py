corners = [3, 5, 7, 9]
adders  = [10, 12, 14, 16]
totalSum = 25

while(corners[3] != 1002001):
    index = len(adders)-1
    num = adders[index]
    for x in range(0, 4):
        corners[x]+=adders[x]
        totalSum+=corners[x]
        num+=2
        adders[x]=num

print(totalSum)


'''
L = [1]
for i in range(3, 1003, 2):
    for j in range(4):
        a = L[-1] + (i-1)
        L.append(a)
print(sum(L))
'''
