import fractions
from fractions import Fraction

list = []

for x in range(10, 100):
    for y in range(x, 100):
        if x==y:
            continue

        if x % 10 == 0 and y %10 == 0:
            continue
        
        str1 = str(x)
        str2 = str(y)

        if str1[0] == str2[0] or str1[0] == str2[1]  or str1[1] == str2[0] or str1[1] == str2[1]:
            if x/y < 1 and len(str(Fraction(x, y))) == 3:
                if str2[0] == '0':
                    div1 = Fraction(int(str1[0]), int(str2[1]))
                    div2 = Fraction(int(str1[1]), int(str2[1]))
                    if  div1 == Fraction(x, y) or div2 == Fraction(x, y):
                        list.append(str(Fraction(x, y)))
                elif str2[1] == '0':
                    div1 = Fraction(int(str1[0]), int(str2[0]))
                    div2 = Fraction(int(str1[1]), int(str2[0]))
                    if  div1 == Fraction(x, y) or div2 == Fraction(x, y):
                        list.append(str(Fraction(x, y)))
                else: 
                    div1 = Fraction(int(str1[0]), int(str2[0]))
                    div2 = Fraction(int(str1[1]), int(str2[0]))
                    div3 = Fraction(int(str1[0]), int(str2[1]))
                    div4 = Fraction(int(str1[1]), int(str2[1]))

                    if  div1 == Fraction(x, y) or div2 == Fraction(x, y) or div3 == Fraction(x, y) or div4 == Fraction(x, y):
                        list.append(str(Fraction(x, y)))
                        print(str1, "/", str2, ":", str(Fraction(x, y)))

                    #16/64, 19/95, 26/65, 49/98    












'''




product = 1 list = []

for x in range(10, 100):
    for y in range(x, 100):
        if x == y:
            continue
        
        if x % 10 == 0 and y % 10 == 0:
            continue

        comp = str(Fraction(x, y))
        if len(comp) != 3:
            continue

        if str(x)[0] == str(y)[1] or str(y)[0] == str(x)[1] or str(x)[0] == str(y)[0] or str(x)[1] == str(y)[0]:
            if int(str(x)[0]) == 0:
                if int(str(x)[1])/int(str(y)[0])==1 or int(str(x)[1])/int(str(y)[1])==1:
                    print("YO")
            elif int(str(x)[1]) == 0:
                if int(str(x)[0])/int(str(y)[1])==1 or int(str(x)[0])/int(str(y)[0])==1:
                    print("BRo")
            elif int(str(x)[0])/int(str(y)[1])==1 or int(str(x)[0])/int(str(y)[0])==1 or int(str(x)[1])/int(str(y)[0])==1 or int(str(x)[1])/int(str(y)[1])==1:
                    print("BRO")
            num1 = str(x)[0]
            num2 = str(y)[0]
            print(x, "/", y, "::", Fraction(x, y))



                        
        
print(set(list))







'''













