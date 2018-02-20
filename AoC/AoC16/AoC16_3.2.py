with open("AoC3.txt") as textFile:
    array=[line.split() for line in textFile]
goodtriangles=0
for x in range(0,3):
    for y in range(0,1902,3):
        if int(array[y][x])+int(array[y+1][x])>int(array[y+2][x]) and int(array[y+1][x])+int(array[y+2][x])>int(array[y][x]) and int(array[y][x])+int(array[y+2][x])>int(array[y+1][x]):
            goodtriangles+=1
print (goodtriangles)
    
