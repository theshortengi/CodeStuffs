file=open('AoC3.txt','r')
goodtriangles=0
for line in file:
    lens=line.split()
    #print (lens)
    if int(lens[0])+int(lens[1])>int(lens[2]) and int(lens[1])+int(lens[2])>int(lens[0]) and int(lens[0])+int(lens[2])>int(lens[1]):
        goodtriangles+=1
print (goodtriangles)
