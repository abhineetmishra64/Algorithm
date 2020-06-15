a=int(input("Enter the size of length"))
b=int(input("Enter the size of width"))
for i in range(0,b):
    for j in range(0,a):
        if(i==0 or i==b-1 or j==0 or j==a-1):
            print('*',end=' ')
        else:
            print(' ',end=' ')
    print()

