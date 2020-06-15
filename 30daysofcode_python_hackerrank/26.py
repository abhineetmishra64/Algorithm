from datetime import date


a = map(int, input().split())
e = map(int, input().split())

a = list(a)
e = list(e)

a = date(day=a[0], month=a[1], year=a[2])
e = date(day=e[0], month=e[1], year=e[2])

fine = 0

if a > e:
    if a.year == e.year:
        if a.month == e.month:
            fine = 15 * (a.day - e.day)
        else:
            fine = 500 * (a.month - e.month)
    else:
        fine = 10000

print(fine)
