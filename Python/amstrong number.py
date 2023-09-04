print("Amstrong number")
n=int(input("Enter the value: "))
num=int(n)
sum=0
while n!=0:
    r = n % 10
    sum = sum + (r ** 3)
    n = n // 10
if sum==num:
    print("Amstrong Number")
else:
    print("Not Amstrong Number")

    
