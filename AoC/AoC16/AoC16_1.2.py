mystring="L3, R1, L4, L1, L2, R4, L3, L3, R2, R3, L5, R1, R3, L4, L1, L2, R2, R1, L4, L4, R2, L5, R3, R2, R1, L1, L2, R2, R2, L1, L1, R2, R1, L3, L5, R4, L3, R3, R3, L5, L190, L4, R4, R51, L4, R5, R5, R2, L1, L3, R1, R4, L3, R1, R3, L5, L4, R2, R5, R2, L1, L5, L1, L1, R78, L3, R2, L3, R5, L2, R2, R4, L1, L4, R1, R185, R3, L4, L1, L1, L3, R4, L4, L1, R5, L5, L1, R5, L1, R2, L5, L2, R4, R3, L2, R3, R1, L3, L5, L4, R3, L2, L4, L5, L4, R1, L1, R5, L2, R4, R2, R3, L1, L1, L4, L3, R4, L3, L5, R2, L5, L1, L1, R2, R3, L5, L3, L2, L1, L4, R4, R4, L2, R3, R1, L2, R1, L2, L2, R3, R3, L1, R4, L5, L3, R4, R4, R1, L2, L5, L3, R1, R4, L2, R5, R4, R2, L5, L3, R4, R1, L1, R5, L3, R1, R5, L2, R1, L5, L2, R2, L2, L3, R3, R3, R1"
mylist=mystring.split(", ")
been=["00"]
#print (mylist)
direction=0
#Adam Pianka gave me the idea
x=0
y=0
i=0
found=False
while found==False:
    if "L" in mylist[i]:
        direction=(direction-1)%4
        dist=mylist[i].replace("L","")
    else:
        direction=(direction+1)%4
        dist=mylist[i].replace("R","")
    for j in range(int(dist)):
        if direction==0:
            y+=1
        elif direction==1:
            x+=1
        elif direction==2:
            y-=1
        else:
            x-=1
        if str(x)+str(y) in been:
            found=True
            print(abs(x)+abs(y))
        else:
            been.append(str(x)+str(y))
    i+=1




