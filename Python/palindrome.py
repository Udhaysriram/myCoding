print(" Palindrome number ")
n=int(input("Enter the value: "))
num=n
sum=0
while n>0:
    r=n%10
    sum=sum*10+r
    n=n//10
if num == sum:
    print("Palindrome")
else:
    print("Not Palindrome")
