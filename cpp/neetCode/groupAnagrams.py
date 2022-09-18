result = []
            skip = [False] * 100000 
            for x in range(0, len(strs)):
                if skip[x] == True:
                    continue
                temp = []
                bruh = False
                f
                    if ''.join(sorted(strs[x])) == ''.join(sorted(strs[y])):
                        temp.append(strs[y])
                        skip[y] = True
                        bruh = True
                
                if bruh == False:
                    result.append(or y in range(x, len(strs)):[strs[x]])
                    
                result.append(temp) 
            
            return result 
                        