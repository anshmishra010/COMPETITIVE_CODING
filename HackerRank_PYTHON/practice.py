# a=str(input("Enter the name "))
# b=int(input("Enter the marks in maths"))
# c= int(input("Enter the marks in science "))
# e=b+c
# print("Name= "+a)
# print("Marks is "+str(e))

# rd=int(input("Enter the radius of the circle "))
# area = 3.14*rd*rd
# cir= 2*3.14*rd
# print("Area is "+str(area))
# print("Circumference is "+str(cir))

# a=str(input("Enter the name of the student "))
# b=float(input("Enter the marks of the math "))
# c=float(input("Enter the marks of the science "))
# d=float(input("Enter the marks of the social subject "))
#
# total = b+c+d
# per=(total/300)
# per1=per*100
# print("Percentage in round figure "+str(int(per1)))
# a='w'
# print(ord(a))
# print("Ansh is the one of the best coder")
# print("Elections")
# age=int(input("Enter ur age "))
# if(age>=18):
#     print("You can vote")
# else:
# #     print("You cannot vote ")
# print("Enter the details")
# name = input("Enter the name ")
# m = int(input("Enter the maths marks "))
# s = int(input("Enter the science marks "))
# c = int(input("Enter the computer marks "))
# t = m+s+c
# per=(t/300)*100
# if(per<=60):
#     print(name)
#     print("total ",t)
#     print("percentage ",per)
#     print(name, "got grade b")
# else:
#     print(name)
#     print("total ",t)
#     print("percentage ",per)
#     print(name,"got grade A")
# ct=input("Enter char to be checked ")
#
# if(ct>="A" and ct<="Z"):
#     print("Upper case letter")
# elif(ct>="a" and ct<="z"):
#     print("Lower case letter")
# else:
#     print("Wrong input ")
# i=0
# s=0
# while(i<=10):
#     s=s+i
#     i=i+1
# a=float(s)/10
# print("sum = ",s)
# print("Average = ",a)
# s = 0
# i=0
# n=int(input("Enter till which digit you want sum n avg"))
# while(i<=n):
#     s=s+i
#     i = i+1
# a = float(s)/n
# print("Sum = ",s)
# print("Average = ",a)
# n=int(input("Enter the number "))
# s=0
# num=n
# while(n>0):
#     r=n%10
#     n=s+(r**3)
#     n=n/10
# if(s==num):
#     print("Amstrong num")
# else:print("Non amrtong")
# s=0
# n=int(input())
# while(n!=0):
#     t=n%10
#
#     s=s+t
#     n=n/10
# print("Sum of digit ",int(s))

# n=2
# for i in range(1,11):print(n,'x',i,'=',n*i)

# n=5
# f=1
# if(n==0):
#     f=1
# for i in range(1,n+1):
#     f=f*i
# print(f)
# n=5
# f=1
# for i in range(1,n+1):f=f*i
#
# def sayHello():
#     print("Hello World!")
# sayHello()
# sayHello()
# str="Easy python"
# print(str[::-1])
# name="John"
# age=23
# print("%s is %d years old"%(name,age))
# i=2
# while True:
#     if i%3==0:
#         break
#     print(i)
#     i+=2
# z=lambda x: x*y
# print z(6)
# str="hello"
# print(str.ljust(10 ,"*"))
# x=0
# while(x<100):
#     x+=2
# print(x)
# print(chr(ord(chr(87))))
# print(ord("e"))

#i=2
# while True:
#     if i%3==0:
#         break
#     print(i)
#     i+=2
# x="hello,SHE IS MY BEST FRIEND"
# print(x.swapcase())
# print(0.1+0.2==0.3)
# str="go corona go"
# print(str[:8 ])
#  for num in range(2,-5,-1):
#      print(num,end=",")
# print("hi"+"hello")
#
# not(10<20) and not(10>30)
# print("xyyzxyzxzxyy".count("yy"))
# prime = 0
# comp = 0
# while(1):
#     num =int(input("enter the num "))
#     if(num==-1):
#         break
#     comp1=0
#     for i in range(2,num):
#         if(num%i == 0):
#             comp1 =1
#             break
#     if(comp1):
#          comp +=1
#     else:prime +=1
# print("t comp = ", comp)
# print("t prime = ",prime)
# print("Enter the details to calculate ")
# a = int(input("Enter first digit "))
# b = int(input("Enter the second digit "))

# add = a+b
# sub = a-b
# mult = a*b
# div = a/b
#
# print("\n")
# print(add)
# print(sub)
# print(mult)
# print(div)
# def func():
#     for i in range(5):
#         print("Hello")
# func()
#
# def func(e):
#     print("hello ", e)
# e=10
# func(e)
# a=int(input())
# b=int(input())
# def add(a,b):
#     r=a+b
#     print(r)
#
# add(a,b)
# n=10
# num_g=1
# while(num_g<=6):
#     g_num = int(input("Enter the num "))
#     if(g_num!=n):
#         print("fail")
#     else:
#         print("win")
#         break
#     # if(g_num<n):
#     #     print("Entered num is small ")
#     # elif(g_num>n):
#     #     print("Entered num is greater ")
#     # else:
#     #     print("Congrats !! ")
#     #     print("Number of guess u took ",num_g)
#     #     break
#     print(6-num_g," guess left ")
#     num_g=num_g+1
# if(num_g>6):
#     print("Game over")

# n= 19
# num_g=5
# while(num_g<=5):
#     g_num=int(input("enter the num "))
#     if(g_num!=n):
#         print("fail")
#     else:
#         print("Win")
#         break
#     g_num = g_num+1
# if(num_g > 5):
#     print("game over")


# n=input()
# m=input()
# try:
#     print("Sum is ",int(n)+int(m))
# except Exception as e:
#     print(e)
# str="Hello"
# print(str.isnumeric())

# def is_leap(year):
#     if(year/4==0):
#         print("False")
#     else:
#         print("True")
#     return
# year=int(input())
# y=int(input())
# if(y%4==0):
#     print("True")
# else:print("False")
# def is_leap(year):
#     leap = False
#     if(year%4==0):
#         leap=True
#     elif(year%400==0 and year%4!=100):
#         leap=True
#
#     # Write your logic here
#
#     return leap
#
#
# year = int(input())
# print(is_leap(year))
#
# n=int(input())
# for i in range(1,n+1):
#     print(i,end="")
# class_list = dict()
# data = input('Enter name & score separated by ":" ')
# temp = data.split(':')
# class_list[temp[0]] = int(temp[1])
#
# # Displaying the dictionary
# for key, value in class_list.items():
#     print('Name: {}, Score: {}'.format(key, value))
# name = input()
#
# score = input()
#
# class_list = {}
#
# class_list[name] = score
#
# print(class_list)
# name =input()
# score=input()
# class_list={}
# class_list[name]=score


# while(1):
#     name=input("Enter the name ")
#     if name.isalpha() == False:
#         print("You have entered ur name in integer")
#         break
#     else:
#         pan_n=input("Enter the pan number ")
#         if pan_n.isalnum() == False:
#             print("invalid pan ")
#             break
#     print("please check "+name+" ur pan number is = "+pan_n)
#     break
# m=input("name ? ")
# if(m.isalpha()==False):
#     print("Wrong")
# else:
#     pan=input("enter pan ")
#     if(pan.isalnum()==False):
#         print("invalid")
#     else:
#         print("name = "+m+" pan "+pan)
# n=input()
# r=input()
# print(n.find(r,0,len(n)))
# n=input()
# print(n[::-1])
# print("ansh"[::-1])
# import pyfiglet
# text="Ansh is best"
# result=pyfiglet.figlet_format(text)
# print(result )

# file=open("file1.txt","w")
# file.write("Hello, my name is ansh")
# file.close()
# print("Data written")
# file=open("file1.txt","w")
# file.write("Heyyy")
# file.close()
# f=open("file1.txt","a")
# f.write(" Boss")
# f.close()
# f=open("file1.txt","a")
# line=[" bad"," welcome"," boy"]
# f.writelines(line)
#f.close()
# file=open("file1.txt","r")
#
#
#
# file.close()
# fil=open("file1.txt","r")
# for line in fil:
#     print(line)
# fil.close()
# value = input("Enter the data to be added ")
# file=open("file1.txt","a+")
# file.write(value)
# #file.close()
# #file=open("file1.txt")
# m=file.read()
# print(m)
# file.close()
# n=input()
# if(n.lower() or n.upper()):
#
#     print(n.title())

# def split_and_join(line):
#     a=line.split(" ")
#     print(a)
#     a="-".join(a)
#     return a
#     # write your code here
#
# if __name__ == '__main__':
#     line = input()
#     result = split_and_join(line)
#     print(result)
# N = int(input()) # input() gets the whole line, int() converts from string to int
# dictionary = {} # dictionaries appear to work the same as objects in javascript
# for i in range(0, N): # don't forget the ':', necessary for all forloops in python!
#     inputArray = input().split()
#     marks = list(map(float, inputArray[1:])) # okay this line is cool, converts indices 1->end of inputArray to floats, puts them in a list
#     dictionary[inputArray[0]] = sum(marks)/float(len(marks)) # sum(marks) adds up everything in marks.. woaaah
# print("%.2f" % dictionary[input()])
# n=int(input())
# dict = {}
# for i in range(0,n):
#     a=input().split()
#     marks = list(map(float,a[1:]))
#     dict[a[0]] = sum(marks)/float(len(marks))
# print("%.2f"%dict[input()])
# while (1):
#     print('''
#                 1. Attendence Calculator
#                 2. Attendence predector
#                 3. exit press -1''')
#
#     option = int(input('Enter your choice '))
#
#     if (option == 1):
#
#         tot_lec = int(input('total lectuer in the week '))
#         i = 1
#         att_list = []
#         print('Enter 00 to calculate')
#         while (1):
#
#             att_lec = int(input('lecture attend in week %d ' % i))
#             if (att_lec == 00):
#                 break
#             else:
#
#                 att_per = (att_lec / tot_lec) * 100
#
#                 print(att_per)
#                 att_list.append(att_per)
#                 i += 1
#
#         tot_att = sum(att_list) / len(att_list)
#         print('Total attendence %f' % tot_att)
#
#     elif (option == 2):
#         print('''
#          1. lecture to be attend for 75% attendence
#          2. next week attendence prediction from attend lecture
#          3. Lecture to be attend for specified attendence percentage \n''')
#         option1 = int(input('choose your option'))
#
#         if (option1 == 1):
#             tot_lec = int(input('total lectuer in the week '))
#             current_att = int(input('Enter cuurent attendence percentage'))
#
#             predict_att = (75 * 2) - current_att
#             print(predict_att)
#
#             lect_attended = (predict_att * 33) / 100
#             if (lect_attended >= 33):
#                 print('you cant do it')
#             else:
#                 bunk_lect = 33 - lect_attended
#                 print('you can bunk %d lectures' % bunk_lect)
#
#         if (option1 == 3):
#             tot_lec = int(input('total lectuer in the week '))
#             current_att = int(input('Enter cuurent attendence percentage'))
#             desired_att = int(input('desired attendence percentage'))
#
#             predict_att = (desired_att * 2) - current_att
#             print(predict_att)
#
#             lect_attended = (predict_att * 33) / 100
#             if (lect_attended >= 33):
#                 print('you cant do it in this week')
#             else:
#                 bunk_lect = 33 - lect_attended
#                 print('you can bunk %d lectures' % bunk_lect)
#     elif (option == -1):
#         exit()

# a=[]
# n=int(input())
# for i in range(0,n):
#     x=int(input())
#     a.append(x)
# for i in range(0,n-2):
#     y= max(a)
# print(y)
# a=[]
# n=int(input())
# for i in range(0,n):
#     x=list(set(map(int,input().split())))
#     a.append(x)
# a.sort()
# #a=list(dict.fromkeys(a))
# #print(a)
# print(a[-2])
# print(3*1**3)
# print(0.1+0.2==0.3)
# print(3^4)
# if __name__ == '__main__':
#     students = []
#     for i in range(int(input())):
#         name = input()
#         score = float(input())
#         students.append([name, score])
#
#     students = sorted(students, key = lambda x: x[1])
#     #print(students)
#     #second_lowest_score = students[1][1]
#     second_lowest_score = sorted(list(set([x[1] for x in students])))[1]
#     desired_students = []
#     for stu in students:
#         if stu[1] == second_lowest_score:
#             desired_students.append(stu[0])
#     print("\n".join(sorted(desired_students)))
# s = input()
# print(s.isalnum())
# print(s.isalpha())
# print(s.isdigit())
# print(s.islower())
# print(s.isupper())

# import pywhatkit as kit
# kit.sendwhatmsg("+919852985457", "YAAR\n"*300, 22,52)

# n = int(input())
# a=set([])
# arr = list(map(int, input().split()))
# arr.append(a)
#
#
# # print(a)
# n=int(input())
# myset =list(set([]))
# for i in range(n):
#     myset.add()
# li = [1,2,3,4,44]
# for i in range(len(li)):
#     print li[i]
# a = [1, 2, 77, 4, 5]
#
# # printing the list using loop
# for x in range(len(a)):
#     print a[x],
# print("hell")
# a=[1,22,33,44]
# for i in range(len(a)):
#     print (a[i],end=" ")
# a=[1,2,3,44]
# it = iter(a)
# for i in it:
#     print(i, end=" ")

# x='save water'
# print(x[3:8])


# def merge(string):
#     s=''
#     for i in string:
#         if i not in s:
#             s=s+i
#     print(s)
# string = input()
# merge(string)
# n=int(input())
#
# for i in range(n):
#     s = input(set())
#     s.add(i)
# print()
# n=int(input())
#
# s = set()
# for i in range(n):
#     s.add(input())
#
# print(len(s))
# n=int(input())
# set1=set()
# for i in range(n):
#     set1.add(input().split())
# y=int(input())
# set2 =set()
# for i in range(y):
#     set2.add(input().split())
# print(set1.union(set2))

# a=int(input())
# set1=set(int(input().split()))
# b=int(input())
# for i in range(b):
#     s1=list(input().split())
#     if(s1[0]=="intersection_update"):
#         set1.intersection_update(int(input()))
#     elif(s1[0]=="update"):
#         set1.update(int(input()))
#     elif(s1[0]=="symmetric_difference_update"):
#         set1.symmetric_difference_update(int(input()))
#     elif(s1[0]=="difference_update"):
#         set1.difference_update(int(input()))
# print(sum(set1))

















