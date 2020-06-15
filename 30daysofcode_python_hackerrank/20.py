#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here
nswap=0
temp=0
for i in range(n):
    for j in range(n-1):
        if(a[j]>a[j+1]):
            temp=a[j]
            a[j]=a[j+1]
            a[j+1]=temp
            nswap = nswap+1
    if(nswap==0):
        break

print("Array is sorted in",nswap, "swaps.")
print("First Element:",a[0])
print("Last Element:",a[n-1])
