print(".***-----EB BILL CALCULATOR-----***.\n")
print("Please select your consumer type... \n1.Home\n2.Commercial\nENTER 1 for Home(OR)ENTER 2 for Commercial")
a=int(input("Please Enter value: "))
if(a==1):
    print("Home Type")
    b=int(input("Enter No of UNITS: "))
    if(b<=500):
        print("Your BILL amount: ",(b-100)*5)
    else:
        print("Your BILL amount: ",((b-600)*7)+2500)
else:
    print("Commercial Type")
    b=int(input("Enter No of UNITS: "))
    if(b<=500):
        print("Your BILL amount: ",(b)*7)
    else:
        print("Your BILL amount: ",((b-500)*10)+3500)
