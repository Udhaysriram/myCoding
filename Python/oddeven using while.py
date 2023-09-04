print("ODD/EVEN")
a = int(input("Enter starting value: "))
b = int(input("Enter ending value: "))
i = a
print("ODD NUMBERS")
while(i<=b):
    if(i%2==1):
        print(i,end=" ")
    i+=1
i = a
print("\nEVEN NUMBERS")
while(i<=b):
    if(i%2==0):
        print(i,end=" ")
    i+=1
