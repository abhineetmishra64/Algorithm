b=[]
q=[]
count=1
n=int(input("Enter the no. of birds"))
for i in range(n):
    b=int(input("Enter the key"))
for j in range(n):
    for k in range(j+1,n):
        if(b[j]==b[k]):
            count=count+1
        else:
            count=1
        q.append(count)
print(q)
