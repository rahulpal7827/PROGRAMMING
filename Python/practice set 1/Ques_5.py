# sum of n natural numbers 
n=int(input("enter the number upto which you have to sum:"))
def sum_nat(n):
    if(n==0):
        return 0
    return sum_nat(n-1)+n

print(sum_nat(n))