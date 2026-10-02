n=int(input())
even=0;odd=0;positive=0;negative=0
i=0
inp=input()
numbers=inp.split()
while(i<n):
    a=int(numbers[i])
    if a%2==0:
        even+=1
    if a<0:
        negative+=1
    if a>0:
        positive+=1
    if a%2==1:
        odd+=1
    i+=1
print("Even:",even)
print("Odd:",odd)
print("Positive:",positive)
print("Negative:",negative)
