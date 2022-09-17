list = []
listTwo = [x for x in range(999999, 1, -2)]
finalCount = 0

def collatz(n, count):
    #later on try if n is a power of two
    if(n == 1):
        return count
    if(n%2==0):
        return collatz(n/2, count+1)
    else:
        return collatz((3*n)+1, count+1)

num = 1
for x in listTwo:
    tempCount = collatz(x, 1)
    if(finalCount<tempCount):
        num = x
        finalCount = tempCount
        continue
print(num)
