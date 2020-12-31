#IN-BUILT STRING OPERATIONS

str = "  "
str1 = "1234"
str2 = "ansh12"
str3 = "Ansh"
str4 = "mishra"
str5 = "my name is ansh "
str6 = "  coder  "

#capitalize()- capitalize first letter of the string
print("capitalize()")
print(str4.capitalize())
print("\n")

#centre(width,fillchar) - adds other string to complete the space
print("centre(width,fillchar)")
print(str3.center(9,"$"))
print("\n")

#count(str,beg,end)- search the occurence of a particular str
print("count(str,beg,end)")
m="s"
print(str5.count(m,0,len(str5)))
print("\n")

#endswith(suffix,beg,end) - check string ends with suffix or not
print("endswith(suffix,beg,end)")
print(str5.endswith("xx",0,len(str5)))
print("\n")

#strswith(prefix,beg,end) -  check string starts with prefix or not
print("strswith(prefix,beg,end)")
print(str5.startswith("my",0,len(str5)))
print("\n")

#find(str,beg,end)-returns position or -1 if found or not
print("find(str,beg,end)")
print(str5.find("ame",0,len(str5)))
print("\n")

#index(str,beg,end)- same as find but returns exception if str not found
print("index(str,beg,end)")
print(str5.index("my",0,len(str5)))
print("\n")

#rfind(str,beg,end)-same as find but start searching from end or right side and returns the position
print("rfind(str,beg,end)")
print(str5.rfind("an",0,len(str5)))
print("\n")

#rindex(str,beg,end) - same as index but start searching from right side and returns position
print("rindex(str,beg,end)")
print(str5.rindex("is",0,len(str5)))
print("\n")

#lower() and upper() - converts char into lower and upper case
print("lower()")
print(str5.lower())
print("\n")
print("upper()")
print(str4.upper())
print("\n")


#strip() , rstrip() ,lstrip() - removes whitespaces
print("strip()")
print(str6.strip())
print("\n")
print("rstrip() ")
print(str6.rstrip())
print("\n")
print("lstrip()")
print(str6.lstrip())
print("\n")

#max(str) and min(str) - returns max and min character(according to ASCII value) from the string
print("max(str)")
print(max(str5))
print("\n")
print("min(str)")
print(min(str5))
print("\n")

#isupper() and islower() - returns wether it is uppercase or lower
print("isupper()")
print(str3.isupper())
print("\n")
print("islower()")
print(str3.islower())
print("\n")

#isdigit() -returns string contains only digit
print("isdigit()")
print(str1.isdigit())
print("\n")

#title() - returns the string title
print("title()")
print(str5.title())
print("\n")

#swapcase() - toggles every case of the string (uppercase to lower and vice-versa)
print("swapcase()")
print(str.swapcase())
print("\n")

#join(list) - joins the list of the string
print("join(list) ")
print('-'.join(['ab','cd','ef']))
print("\n")

#enumerate(str) - returns list pairs with key value and object
print("enumerate(str)")
print(list(enumerate(str5)))
print("\n")
