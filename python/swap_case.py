def swap_case(s):
    temp = []
    l = list(s)

    for i in l:
        j = ""
        if i.islower():
            j = i.upper()
        elif i.isupper():
            j = i.lower()
        else:
            temp.append(i)
        temp.append(j)
    
    r = ''.join(temp)
    
    return r
if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)