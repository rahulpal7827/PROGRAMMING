sub={}
x=int(input("enter the marks of phy:"))
y=int(input("enter the marks of Math:"))
z=int(input("enter the marks of Eng:"))
sub.update({"phy":x})
sub.update({"Math":y})
sub.update({"Eng":z})
print(sub)