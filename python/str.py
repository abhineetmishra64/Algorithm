def count_substring(string,sub_string):
    c=0
    for i in range(0,len(string)):
        if string[i:].startswith(sub_string):
            c=c+1
    return c

string=input().strip()
sub_string=input().strip()
count=count_substring(string,sub_string)
print(count)
