N =100000
is_prime = [1]*N
# We know 0 and 1 are composites
is_prime[0] = 0
is_prime[1] = 0

def sieve():
    """
    We cross out all composites from 2 to sqrt(N)
    """
    i = 2
    # This will loop from 2 to int(sqrt(x))
    while i*i <= N:
        # If we already crossed out this number, then continue
        if is_prime[i] == 0:
            i += 1
            continue

        j = 2*i
        while j < N:
            # Cross out this as it is composite
            is_prime[j] = 0
            # j is incremented by i, because we want to cover all multiples of i
            j += i

        i += 1

sieve()

'''
for x in range(1, N):
    if is_prime[x] == 1:
        print(x)

'''


maxN= 0
maxProduct=1
for a in range(-1000, 1001):
    for b in range(-1000, 1001):
        #number of primes
        n = 0
        isPrime = True
        #while it is still a consecutive prime
        while(isPrime):
            val = (n**2)+(a*n)+(b)
            if(is_prime[val] == 1):
                n+=1
                continue
            else:
                if(n > maxN):
                    maxN = n
                    maxProduct = a*b
                isPrime == False
                break


print(maxProduct)











