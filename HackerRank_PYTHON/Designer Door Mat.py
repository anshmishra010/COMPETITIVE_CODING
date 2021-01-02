r,c = map(int,input().split())
for i in range(1,r,2):
    print((".|."*i).center(c,"-"))
print("WELCOME".center(c,'-'))
for i in range(r-2,-1,-2):
    print((".|."*i).center(c,"-"))