file=open('AoC17_1.txt','r')
sum=8
string=file.read()
for x in range(0, len(string)-2):
    if string[x]==string[x+1]:
        sum=sum+int(string[x])
print(sum)
