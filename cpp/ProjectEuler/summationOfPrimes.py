#ProjectEuler problem 10 Summation of Primes

def isPrime(num):
    for x in range(2, num):
        if num % x == 0:
            return False
    
    return True


sum = 0

for x in range(2, 2000000):
    print(x)
    if isPrime(x):
        sum+=x



print(sum)
