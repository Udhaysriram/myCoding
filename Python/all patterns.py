print("PATTERNS\n")
n=int(input("Enter the value: "))
for i in range(0,n,1):
    for j in range(0,n,1):
        print("*",end=" ")
    print("\n")

print("\n")
for i in range(0,n,1):
    for j in range(0,n,1):
        if(i==0 or i==n-1 or j==0 or j==n-1):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print("\n")
    
print("\n")
for i in range(0,n,1):
    for j in range(0,i+1,1):
        print("*",end=" ")
    print("\n")
    
print("\n")
for i in range(0,n,1):
    for j in range(0,n-i,1):
        print("*",end=" ")
    print("\n")
    
print("\n")
for i in range(0,n,1):
    for j in range(0,n,1):
        if(j<i):
            print(" ",end=" ")
        else:
            print("*",end=" ")
    print("\n")

print("\n")
for i in range(0,n,1):
    for j in range(0,n,1):
        if(j<n-i-1):
            print(" ",end=" ")
        else:
            print("*",end=" ")
    print("\n")
    
print("\n")
for i in range(0,n,1):
    for j in range(0,n+i,1):
        if(j<n-i-1):
            print(" ",end=" ")
        else:
            print("*",end=" ")
    print("\n")

print("\n")
for i in range(0,n,1):
    for j in range(0,n,1):
        if(j<n-i-1):
            print(" ",end=" ")
        else:
            print("*  ",end=" ")
    print("\n")
            
