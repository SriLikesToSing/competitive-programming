def getDivisors(num):
    return [x for x in range(1, num) if num % x == 0]


def sumDivisors(num):
    return sum(getDivisors(num))

def isAbundant(num):
        if sumDivisors(num) > num:
            return "YES"

        return "NO"



