k = int(input())
r = input().split()
r.sort()
for i in range(len(r)):
    if(i!=len(r)-1):
        if(r[i]!=r[i-1] and r[i]!=r[i+1]):
            print(r[i])
            break
    else:
        print(r[i])