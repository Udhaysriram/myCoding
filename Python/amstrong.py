print("Amstrong Number")
a = int(input("Enter starting value:"))
b = int(input("Enter ending value:"))
for i in range(a,b+1):
        num=i
        n=i
        sum=0
        while n>0:
            r=n%10
            sum=sum+(r*r*r)
            n=n/10
if num==sum:
    print(i,end=" ")

