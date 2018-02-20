file=open('AoC15_2.txt','r')
sum=0
slack=0
for line in file:
    dims=list(map(int,(line.strip().split('x'))))
    a=dims[0]*dims[1]
    b=dims[1]*dims[2]
    c=dims[2]*dims[0]
    #calculate slack
    if a<=b and a<=c:
        slack=a
    if b<=a and b<=c:
        slack=b
    if c<=a and c<=b:
        slack=c
    sum=sum+2*a+2*b+2*c+slack
print(sum)
