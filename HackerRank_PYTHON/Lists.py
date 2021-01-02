n=int(input())
l=list()
for i in range(n):
    x=input().split()
    t=x[0]
    if(t=="insert"):
        l.insert(int(x[1]),int(x[2]))
    elif(t=="print"):
        print(l)
    elif(t=="remove"):
        l.remove(int(x[1]))
    elif(t=="append"):
        l.append(int(x[1]))
    elif(t=="sort"):
        l.sort()
    elif(t=="pop"):
        if len(l)!=0:
            l.pop()
    elif(t=="reverse"):
        l.reverse()