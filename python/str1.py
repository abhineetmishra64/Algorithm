a = str(input("Enter an string"))
len = len(a)
print("Frequency of chracter")
for i in range(0,len):
    count=1
    for j in range(i+1,len):
        if a[i]==a[j]:
            count=count+1
    print(a[i],count)
