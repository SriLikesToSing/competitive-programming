def sumDivisible(n):
    val = int(1000/n)
    sum = (n * (val*(val+1)))/2

    return sum



#print(sumDivisible())
print(sumDivisible(5)+sumDivisible(3)-sumDivisible(15))
