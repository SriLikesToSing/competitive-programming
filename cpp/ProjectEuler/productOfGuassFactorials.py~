'''

find the G(10^8) gauss factorial. 


a relatively prime number has no other common factors other than 1.


https://math.libretexts.org/Courses/Mount_Royal_University/MATH_2150%3A_Higher_Arithmetic/4%3A_Greatest_Common_Divisor_least_common_multiple_and_Euclidean_Algorithm/4.4%3A_Relatively_Prime_numbers#:~:text=Definition%3A%20Relatively%20prime%20or%20Coprime,and%2020%20are%20relatively%20prime.

basically relatively prime if gcd(a, b) = 1

'''
from multiprocessing import Pool
from math import gcd as bltin_gcd


gFunc = {}


for x in range(1, y):
    product*=x if bltin_gcd(x, y) == 1 else 1
gfunc[y] = product
finalProduct*=gFunc[y]


def process(args):
    finalProduct = 1
    for y in range(1, args):
        product=1
        if y in gFunc.keys():
            finalProduct*=gFunc[y]
            continue
        else:
            for x in range(1, y):
                product*=x if bltin_gcd(x, y) == 1 else 1
            gfunc[y] = product
            finalProduct*=gFunc[y]
    print(finalProduct)

argsList = [int(input())]
'''
with Pool(processes=4) as pool:
    pool.map(process, argsList)
'''


















































