with open("/Users/rahul/Desktop/PROGRAMMING/Python/FILE/nothing.txt","w+") as f:
    f.write("Hello,World")
    f.seek(0)
    text= f.readline()
    print(text)