

from collections import defaultdict

n, m = map(int, input().split())
D = defaultdict(list)

for i in range(n):
    s = input().rstrip()
    D[s].append(i + 1)

for i in range(m):
    s = input().rstrip()
    if s in D:
        print(' '.join(map(str, D[s])))
    else:
        print(-1)