
def rotation(number):
    str_number = str(number)
    return {
            int(str_number[i:] + str_number[:i]) 
            for i in range(len(str_number))
          }

def primes_sieve2(limit):
    a = [True] * limit
    a[0] = a[1] = False

    for(x, isprime) in enumerate(a):
        if isprime:
            yield x 
            for n in range(x*x, limit, x): 
                a[n] = False

    
print(rotation(197))
nums = {} 

index = 0
bruh = list(primes_sieve2(1000001))

for x in range(2, 1000001):
    if index == len(bruh):
       index = 0 
       continue
    if x == bruh[index]: 
        nums[x] = True
        index+=1
        continue
    nums[x] = False 

count = 0
for x in bruh:
    temp = 0
    rot = rotation(x)
    for y in rot:
        if nums.get(y) == True:
            temp+=1    
    if temp == len(rot):
        count+=1


print(count)






