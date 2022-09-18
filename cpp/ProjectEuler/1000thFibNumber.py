
def fibonacci_doubling(n):
    """ Calculate the Nth Fibonacci number using the doubling method. """
    return _fibonacci_doubling(n)[0]


def _fibonacci_doubling(n):
    """ Calculate Nth Fibonacci number using the doubling method. Return the
    tuple (F(n), F(n+1))."""
    if n == 0:
        return (0, 1)
    else:
        a, b = _fibonacci_doubling(n >> 1)
        c = a * ((b << 1) - a)
        d = a * a + b * b
        if n & 1:
            return (d, c + d)
        else:
            return (c, d)

print(len(str(fibonacci_doubling(4782))))




