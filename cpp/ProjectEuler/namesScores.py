

def calculateScore(name):
    dict = {"A":1, "B":2, "C":3, "D":4, "E":5, "F":6, "G":7, "H":8, "I":9, "J":10,"K":11, "L":12, "M":13, "N": 14, "O":15, "P":16, "Q":17, "R":18, "S":19, "T":20, "U":21, "V":22, "W":23, "X":24, "Y":25, "Z":26}
    count = 0
    for x in name:
        count+=dict[x]
    return count

names  = open("NAMESLIST.txt", "r")
namesList = []


for x in names:
    names = x.split(",")
    break


for x in names:
    namesList.append(x[1:len(x)-1])


namesList.sort()


SUM = 0
for x in range(0, len(namesList)):
   score = calculateScore(namesList[x])
   score = score*(x+1)
   SUM+=score

print(SUM)
#sort the list alphabetically

'''
    O(5000*m)

    SUM = 0
    for each name in the list
        calculate the score
        multiply the score by the position in the list + 1
        add it to the total sum

'''






