def getDivisors(num):
    return [x for x in range(1, num) if num % x == 0]


def sumDivisors(num):
    return sum(getDivisors(num))

def isAbundant(num):
        if sumDivisors(num) > num:
            return True

        return False

abundantNumbers = []


for x in range(1, 28124):
   print(x)
   if isAbundant(x):
        abundantNumbers.append(x)

print(len(abundantNumbers))

abundantSums = {1}

for x in abundantNumbers:
    for y in abundantNumbers:
        if x + y >28123:
           continue
        abundantSums.add(x+y)



print(len(abundantSums)-1)



SUM = 0
COUNT = 1
for x in range(2, 28124):
    if x in abundantSums:
        continue
    else:
        print(x)
        SUM+=x
        COUNT+=1

print(SUM, " ", COUNT+1)

'''

    find all the abundant numbers
    find all possible abundant sums less than or equal to 28123
    for all numebrs in range 28123 find numbers that are not in the abundant sums







'''
