import numpy

nums = []
divisorSums = []

def sumOfDivisors(num):
   temp = []
   sum = 0
   for x in range(1, num):
        if num%x == 0:
            temp.append(x)
            sum+=x

   temp.append(num)
   return sum

sum = 0

print(sumOfDivisors(220), " ", sumOfDivisors(284))

count = 0

for x in range(1, 10000):
    nums.append(x)
    divisorSums.append(sumOfDivisors(x))


for x in range(1, 10000):
    amicableNumber = divisorSums[x-1]
    for y in range(1, 10000):
        if x == y:
            break

        if y == amicableNumber:
            if divisorSums[y-1] == x:
                count+=x
                count+=y
                break
print(count)
