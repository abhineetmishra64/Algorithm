dct = dict()
lst = list()
for i in range(0,input()):
    name = raw_input();
    lst = name.split(" ");
    key = lst[0];
    dct[key] = float((float(lst[1])+float(lst[2])+float(lst[3]))/3);
search = raw_input();
print("{0:.2f}".format(dct[search]));