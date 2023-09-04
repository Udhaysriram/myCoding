print("Biggest among ABC")
a = int(input("Enter a value"))
b = int(input("Enter b value"))
c = int(input("Enter c value"))
if(a>=b and a>c):
    print(a," is bigger")
elif(b>a and b>=c):
    print(b,"is bigger")
elif(c>=a and c>b):
    print(c," is bigger")
else:
    print("all are equal")
        
