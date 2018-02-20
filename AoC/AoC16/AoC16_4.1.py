file=open('AoC4.txt','r')
ans=0
for line in file:
    sumcheck=''
    checksum=line[line.index("[")+1:line.rindex("]")]
    #print (checksum)
    name=line[:-11].replace("-","")
    ID=line[-11:-8]
    sname=''.join(sorted(name))
    frequency=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
    for i in range(97,123):
        frequency[i-97]=sname.count(chr(i))
    for f in range(8,0,-1):
        for x in range(0,26):
            if frequency[x]==f:
                sumcheck+=chr(x+97)
    #print (sumcheck[:5])
    if sumcheck[:5]==checksum:
        ans+=int(ID)            
print (ans)
