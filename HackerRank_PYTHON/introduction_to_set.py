<<<<<<< HEAD
def average(array):
    a=len(set(arr))
    s=sum(set(arr))
    result = s/a
    return result
    # your code goes here

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
=======
def average(array):
    a=len(set(arr))
    s=sum(set(arr))
    result = s/a
    return result
    # your code goes here

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
>>>>>>> ce802524d388c4180a34a91bd44d38c0e8c8d50d
    print(result)