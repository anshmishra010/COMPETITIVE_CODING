if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    x= sorted(arr)
    a=list(dict.fromkeys(x))
    print(a[-2])