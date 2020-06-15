row=int(input("row: "))
for i in range(row+1):
    for j in range((row+1-i)-1):
        print(end=' ')

    for k in range(2*i-1):
        print("*",end='')
    print()
