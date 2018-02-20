file=open('AoC15_1.txt','r')
floor=0
string=file.read()
for i in range (0, len(string)):
    if string[i]=="(":
        floor=floor+1
    if string[i]==")":
        floor=floor-1
print (floor)
