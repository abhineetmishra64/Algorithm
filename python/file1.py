file=input("enter the file name: ")
fr=open(file,"r")
count={}
for word in fr.read().split():
    if word not in count:
        count[word]=1
    else:
        count[word]+=1

for k,v in count.items():
    print(k,v)
