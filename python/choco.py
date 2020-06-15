import math
import sys
s=[]
q=[]
count=0
n=int(input("Enter the size of choclate"))
for i in range(n):
    s=int(input())
    for j in range(i,i+m-1):
        q.extend(range(j))

d=int(input())
m=int(input())
if(sum(q)==d):
    count=count+1
print(count)
