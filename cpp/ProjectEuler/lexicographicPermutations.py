def permutation(list):

    if len(list) == 0:
        return []


    if len(list) == 1:
        return [list]

    l = []

    for x in range(len(list)):
        m = list[x]

        remList = list[:x] + list[x+1:]

        for y in permutation(remList):
            l.append([m] + y)

    return l



data = list('013456789')

final = []
for p in permutation(data):
    print(p)
    final.append(p)

print(len(final))

print(final[274239])






















'''
- generate permuations
- sort them lexicographically




'''
