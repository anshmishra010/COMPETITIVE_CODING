<<<<<<< HEAD
n=int(input())
student = []
markslsit = [] #will be used to store marks and then for sorting

for i in range(n):
    name = input()
    marks = float(input())
    student.append([name,marks])
    markslsit.append(marks)

student.sort() #sorting acc to alphabet
s_low = sorted(set(markslsit))[1] #1 is used because we want second lowest

for i,j in student: #i is used for name and j for marks in student list.
    if(j==s_low):
        print(i)


=======
n=int(input())
student = []
markslsit = [] #will be used to store marks and then for sorting

for i in range(n):
    name = input()
    marks = float(input())
    student.append([name,marks])
    markslsit.append(marks)

student.sort() #sorting acc to alphabet
s_low = sorted(set(markslsit))[1] #1 is used because we want second lowest

for i,j in student: #i is used for name and j for marks in student list.
    if(j==s_low):
        print(i)


>>>>>>> ce802524d388c4180a34a91bd44d38c0e8c8d50d
