print("Prime Number")
a = int(input("Enter starting value:"))
b = int(input("Enter ending value:"))
for i in range(a,b+1):
    count=0;
    for j in range(2,i):
        if(i%j==0):
            count=1
            break
    if(count==0):
        print(i,end=" ")
