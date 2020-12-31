<<<<<<< HEAD
def print_formatted(number):
    l=len("{0:b}".format(number))
    for i in range(1,number+1):
        print("{0:{w}d} {0:{w}o} {0:{w}X} {0:{w}b}".format(i,w=l))
    # your code goes here

if __name__ == '__main__':
    n = int(input())
=======
def print_formatted(number):
    l=len("{0:b}".format(number))
    for i in range(1,number+1):
        print("{0:{w}d} {0:{w}o} {0:{w}X} {0:{w}b}".format(i,w=l))
    # your code goes here

if __name__ == '__main__':
    n = int(input())
>>>>>>> ce802524d388c4180a34a91bd44d38c0e8c8d50d
    print_formatted(n)