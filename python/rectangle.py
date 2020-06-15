def print_rectangle(n,m):
    for i in range(1,n+1):
        for j in range(1,m+1):
            if(i==1 or i==n or j==1 or j==m):
                print("*",end=" ")
            else:
                print(" ",end=" ")
        print()


columns=int(input("Enter the length of the rectangle: "))
rows=int(input("Enter the width of the rectangle: "))
print_rectangle(rows,columns)
