#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        nk = input().split()

        n = int(nk[0])

        k = int(nk[1])

        m=0

        for j in range(n-1,1,-1):
            for l in range(n,j,-1):
                h= j&l

                if h<k and h>m:
                    m=h
                elif m==k-1:
                    break
            if m==k-1:
                break
            
        print(m)
