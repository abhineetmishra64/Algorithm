#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))


s=-63
for i in range(len(arr)-2):
    for j in range(len(arr[i])-2):
        t1=arr[i][j]
        t2=arr[i][j+1]
        t3=arr[i][j+2]
        t4=arr[i+1][j+1]
        t5=arr[i+2][j]
        t6=arr[i+2][j+1]
        t7=arr[i+2][j+2]
        max_sum=t1+t2+t3+t4+t5+t6+t7
        s=max(max_sum,s)
print(s)
