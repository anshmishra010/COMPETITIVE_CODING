def merge_the_tools(string, k):
    count = 0
    s = ''

    for i in string:
        if i not in s:
            s = s + i
        count += 1
        if (count == k):
            print(s)
            count = 0
            s = ''
    # your code goes here


if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)