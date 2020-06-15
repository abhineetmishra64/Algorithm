n=int(input("how many elements: "))
d={}
for i in range(n):
    k=int(input("enter key"))
    v=int(input("value: "))
    d.update({k:v})

print(d)
