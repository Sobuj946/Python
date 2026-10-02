string="""In 1636, the Sultanate of Bijapur 
invaded the kingdoms to its south.[7] The sultanate had 
recently become a tributary state of the Mughal Empire.
It was being helped by Shahaji, who at the time was a chieftain in
 the Maratha uplands of western India. Shahaji was looking for
   opportunities of rewards of jagir land in the conquered territories,
 the taxes on which he could collect as an annuity.[7]"""
with open('data.txt','a') as file:
    file.write(string)
lst=[]
with open('data.txt','r') as file1:
    for line in file1:
        lst.extend(line.strip().split())

lst1=list(filter(lambda x :len(x)>5,lst))
print(len(lst1))
