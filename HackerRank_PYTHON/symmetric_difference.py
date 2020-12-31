<<<<<<< HEAD
m=int(input())
mset = set(map(int,input().split()))
n=int(input())
nset = set(map(int,input().split()))

md = mset.difference(nset)
nd = nset.difference(mset)

ot = md.union(nd)

for i in sorted(list(ot)):
=======
m=int(input())
mset = set(map(int,input().split()))
n=int(input())
nset = set(map(int,input().split()))

md = mset.difference(nset)
nd = nset.difference(mset)

ot = md.union(nd)

for i in sorted(list(ot)):
>>>>>>> ce802524d388c4180a34a91bd44d38c0e8c8d50d
    print(i)