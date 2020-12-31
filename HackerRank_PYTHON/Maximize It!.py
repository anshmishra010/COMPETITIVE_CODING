# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import product
n,m = [int(x) for x in input().split()] #using list comphrehension for taking 2input
lis = list()
for i in range(n):
    li = list(map(int,input().split()))[1:]
    lis.append(li)
# main logic
result = map(lambda x:sum(i*i for i in x)%m,product(*lis))
print(max(result))
# x is first list which is coming from the product and then perform the further operations
# i is element present in the list and we r doing the square of it as given in question.