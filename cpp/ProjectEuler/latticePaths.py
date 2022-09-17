#latticePaths


arr = []


def totalPaths(xPos, yPos):
    if xPos == 20 and yPos == 20:
        print("YAYA!")
        arr.append(1)
        return

    if xPos+1<=20:
        totalPaths(xPos+1, yPos)

    if yPos+1<=20:
        totalPaths(xPos, yPos+1)

print("Processing....")
totalPaths(0, 0)
count = 0

for x in arr:
    count+=x
print("Done!")
print(x)
