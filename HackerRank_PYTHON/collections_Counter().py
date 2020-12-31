from collections import Counter
a=int(input())
size = list(map(int,input().split()))
n=int(input())
dic =Counter(size)
p=0
for i in range(n):
    stock,price = map(int,input().split(' '))
    if(dic[stock]):
        dic[stock]-=1
        p=p+price
print(p)