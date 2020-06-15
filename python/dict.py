n=int(input("Enter the total no. of student"))
d=dict()
for i in range(n):
    name,marks=input().split()
    d[name]=marks

st=input()
if st in d:
    print(marks)
else:
    print("Not found!")
