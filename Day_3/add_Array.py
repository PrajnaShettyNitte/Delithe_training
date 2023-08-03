n1 = int(input())
n2 = int(input())

a1 = []
a2 = []
num1=0
num2=0

for i in range(n1):
    a1.append(int(input()))
    num1=num1*10+a1[i]

for i in range(n2):
    a2.append(int(input()))
    num2=num2*10+a2[i]
sum=num1+num2
n=[]
sum=str(sum)
for i in sum:
    n.append(int(i))
print(n)
    

