"""==== Normal finction===="""

def changeme(mylist):
    mylist.extend([1,2,4,5,6])
    return
mylist=[10,20,30,40]
changeme(mylist)
print("value changed by the function: ",mylist)

"""===== Keyword Argument====="""

def profile(age,name):
    print("age",age)
    print("name",name)
    return
age=int(input("Enter the age:-"))
name=input("Enter name:-")
profile(name,age)

"""=========variable length======="""

def add(*nums):
    return sum(nums)

print(add(2, 3))         
print(add(1, 2, 3, 4))
print(add(34,53,23,53,5))

"""=====Default====="""

def info(name,section='D'):
    print("Name:-",name)
    print("section:-",section)
    return
info(name="Rahul",section='E')
info(name="Ranjeet")

"""========lambda functions========"""

x=lambda a,b,c:a/b/c
print(x(12,2,3))
# name=lambda arguments:what to do.
