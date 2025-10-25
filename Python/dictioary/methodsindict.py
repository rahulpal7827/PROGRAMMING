"""
myDict.keys()- returns all keys
myDict.values()- returns all vlaues
myDict.items()- returns all keys and values pairs and tuples
myDict.get("keys"")- returns the keys according to value
myDict.update(newDict)- insert the specificed items to the dictionary
"""
dic={
 "name" : "rahul",
 "class" : "2D",
 "cgpa" : 7.5,
 "age" : 19,
 " subjects": ["python", "java"],
 "touple": (1,2),
 ("name_1"): 1 
}
print(dic.keys())
print(list(dic.keys()))# type case in list
print(len(dic))
print(list(dic.values()))
print(list(dic.items()))
print(dic.get("age"))
print(dic.get("age1"))# no error
new_dict={ "pipe" : 4, "nsme": 87}
dic.update(new_dict)
print(dic)
