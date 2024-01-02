'''

E(N) is a function that returns the expected number of points assuming player wants to maximize thier
score.

gets a point for guessing each bit correctly

E(10) = 2 because you can always guess 1 

two paths:

    - guess it correct
    - whether the last bit in the number


how tf do we maximize our with a uniform distribution?

how do we guess to maximize our score?
    - 


https://en.wikipedia.org/wiki/Dominating_set


observations:
    - no binary number ending in an 0 can be a primse, except 10 which is the number 2.

    - can we binary search on the bits?

    - so how does E(N) work? 

        - E(10)
            - we can alwys guess the least significant bit correctly and the last bit (mantissa at front)
                - lower bound of E(N) >= 2 
            - since the player is informed whether the guess is correct or not, it allows you to guess the number using techniques from information theory

            - 1/2 probability of guessing the bit 

            - let's assume 7 was picked

                    7 in binary is 111                
                        
                         - first guess in the LSB is 1, which will be correct. you get 1 point.
                         - second guess you have 1/2 odds of getting right, either 1 or 0  
                                
                                - if you guess 0, you get no points, and get told its a 1

                                - if you guess 1, you get 1 point

                         - third guess you have 100 percent odds of getting, so you get another point

                         - total guaranteed points in 2
                         - max points achievable is 3

                         - essentially expected number of points is the guaranteed points 
            - E(30)

            - the number of guesses is the number of points


useful tool 
    - http://www.geometer.org/mathcircles/bitmaster.pdf
                -
                        



             
            



'''

# http://www.math-math.com/2014/01/prime-numbers-in-binary.html


print(bin(10**8))

# 101111101011110000100000000 <---- max possible bits



























