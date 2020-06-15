t = int(input())
for i in range(t):
    a = int(input())
    l = []
    for i in range(a):
        q = int(input())
        l.append(q)
    b = int(input())
    s = []
    for i in range(b):
        c = int(input())
        s.append(c)
    flag = 00
    if (all(x in s for x in l)):
        flag = 1
    if(flag):
        print("True")
    else:
        print("False")