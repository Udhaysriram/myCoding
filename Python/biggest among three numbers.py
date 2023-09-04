print("Biggest among three numbers")
a=int(input("Enter a value: "))
b=int(input("Enter b value: "))
c=int(input("Enter c value: "))
if(a<=b & a<=c):
    if(b<c):
        print(c,"is the biggest number")
    else:
        print(b,"is the biggest number")
else:
    print(a,"is the biggest number")
