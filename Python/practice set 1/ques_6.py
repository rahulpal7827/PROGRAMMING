# list and index
def print_list(list,index=0):
    if(index==len(list)):
        return
    print(list[index])
    print_list(list,index+1)

normal= ["rahul", "noble","Tarun"]
a= print_list(normal)