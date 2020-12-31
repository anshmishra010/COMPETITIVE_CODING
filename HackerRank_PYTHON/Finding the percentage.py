n=int(input())
dict = {}
for i in range(0,n):
    a=input().split()
    marks = list(map(float,a[1:]))
    dict[a[0]] = sum(marks)/float(len(marks))
print("%.2f"%dict[input()])