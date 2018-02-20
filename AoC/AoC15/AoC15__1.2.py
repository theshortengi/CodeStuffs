file=open('AoC15_1.txt','r')
floor=0
found=False
i=0
string=file.read()
while found==False:
    if string[i]=="(":
        floor=floor+1
    if string[i]==")":
        floor=floor-1
    if floor==-1:
        found=True
        print (i+1)
    else:
        i=i+1
