'''
the max sum cannot exceed 200p

- 1 200p
- 2 100p
- 4 50p
- 10 20p
- 20 10p
- 200 1p


'''


def coinSums(N):
    DP = [0 for x in range(0, N+1)]
    coins = [1, 2, 5, 10, 20, 50, 100, 200]
    DP[0] = 1
    
    '''

    for x in range(3, N+1):
        for y in coins:
            if x<y:
                continue
            DP[x]+=((DP[x-y]//2)+1)
    '''
    for y in coins:
        for x in range(y, N+1):
            DP[x]+=DP[x-y]

   
    return DP[N] 

print(coinSums(200))
    











