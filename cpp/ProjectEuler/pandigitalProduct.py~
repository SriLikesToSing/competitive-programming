'''
9*1110
2+3+4
2+4+4
2+5+3



'''

def check(l):
    modelList = ["1", "2", "3", "4", "5", "6", "7", "8", "9"]
    if len(l) != len(modelList):
        return False 
    l = list(l)
    l.sort()
    for x in range(0, len(modelList)):
        if l[x] != modelList[x]:
            return False

    return True

sum = 0
sums = []
for x in range(1, 10):
    for y in range(1000, 10000):
      tempProduct = x*y
      temp = str(x)+str(y)+str(tempProduct)
      
      if check(temp):
          print(x, ":", y, ":", tempProduct)
          sums.append(tempProduct)
          #sum+=(tempProduct)


for x in range(10, 100):
    for y in range(100, 1000):
      tempProduct = x*y
      temp = str(x)+str(y)+str(tempProduct)
      
      if check(temp):
          print(x, ":", y, ":", tempProduct)
          sums.append(tempProduct)
          #sum+=(tempProduct)
sums = set(sums)
sum = 0
for x in sums:
    sum+=x
print(sum)



















