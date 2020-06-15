a=[]
n=int(input('Enter the no. of students'))
for i in range(n):
    m=int(input('Enter the score'))
    print(m)
    if m not in a:
        a.append(m)
    print(a)
a.sort()
print(a[-2])
