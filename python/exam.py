n=int(input("Enter no. of student: "))
std={}
for i in range(n):
    info={}
    info['name']=input("Enter name: ")
    info['age']=int(input("Enter age: "))
    info['marks']=int(input("Enter marks: "))
    std[i]=info

print(std)
marks=[]
for i in range(n):
    marks.append(std[i]['marks'])

print(sum(marks)/n)
ind=marks.index(max(marks))
print(std[ind])
