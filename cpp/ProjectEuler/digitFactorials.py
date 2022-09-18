import math


sum = 0
for x in range(3, 100000):
    bruh = str(x)
    nums = [y for y in bruh]
    temp = 0
    for z in nums:
        n = int(z)

        temp+=math.factorial(n)
    if temp == x:
        print("YOO")
        sum+=x
    
    if x == 145:
        print(temp)


print(sum)







