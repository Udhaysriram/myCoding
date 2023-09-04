print("TAX Calculator\n")
a=int(input("Enter the amount :"))
if(a<=50000):
    print("TAX FREE")
elif(a>=50001 and a<=100000):
    print("TAX amount: ",a*(0.01))
elif(a>=100001 and a<=200000):
    print("Tax amount: ",((a-100000)*(0.02)+1000))
elif(a>=200001 and a<=300000):
    print("Tax amount: ",((a-200000)*(0.03)+3000))
elif(a>=300001 and a<=400000):
    print("Tax amount: ",((a-300000)*(0.04)+6000))
elif(a>=400001 and a<=500000):
    print("Tax amount: ",((a-400000)*(0.05)+10000))
else:
    print("Please Enter valid amount")
