a = int(input())
set1 = set(map(int, input().split()))
b = int(input())
for i in range(b):
    s1 = list(input().split())
    if (s1[0] == "intersection_update"):
        set1.intersection_update(set(map(int, input().split())))
    elif (s1[0] == "update"):
        set1.update(set(map(int, input().split())))
    elif (s1[0] == "symmetric_difference_update"):
        set1.symmetric_difference_update(set(map(int, input().split())))
    elif (s1[0] == "difference_update"):
        set1.difference_update(set(map(int, input().split())))

print(sum(set1))