from itertools import permutations
a,b=input().split()
for i in list(permutations(sorted(a),int(b))):
    print("".join(i))