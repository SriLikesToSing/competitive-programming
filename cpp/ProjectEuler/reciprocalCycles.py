print(1/2)
print(1/3)
print(1/7)






#long division

#if you've seen a division that has already been done then stop

def decimals(number):
    divisor = number
    dividend = 1
    remainder = 1

    while remainder:
        quotient = dividend // divisor
        remainer = dividend % divisor

        if remainder < divisor:
            dividend = remainder * 10
        else:
            dividend = remainder

        return quotient


print(decimals(1/2))














