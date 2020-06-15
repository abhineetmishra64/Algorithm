import random
a=[]
b=[]
n=[]
for i in range(0,6):
    x=random.randint(1,101)
    a.append(x)

for i in range(0,6):
    x=random.randint(1,101)
    b.append(x)
n=[0 for i in range(6)]
for j in range(0,6):
    n[j]=a[j]+b[j]

print(n)
