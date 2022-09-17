from num2words import num2words
import re

count = 0
for x in range(1, 1001):
    num = re.sub('[^0-9a-zA-AZ]+', '', num2words(x))
    count+=len(num)

print(count)
