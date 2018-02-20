file=open('AoC17_1.txt','r')
sum=0
string=file.read()
for x in range(0, (len(string)-1)):
    if string[x]==string[(x+len(string)//2)%len(string)]:
        sum=sum+int(string[x])
print(sum)
