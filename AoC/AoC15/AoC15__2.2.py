file=open('AoC15_2.txt','r')
sum=0
for line in file:
    done=False
    dims=list(map(int,(line.strip().split('x'))))
    a=dims[0]
    b=dims[1]
    c=dims[2]
    if a>=b and a>=c:
        sum=sum+b+b+c+c
        done=True
    if b>=a and b>=c and done==False:
        sum=sum+a+a+c+c
        done=True
    if c>=a and c>=b and done==False:
        sum=sum+b+b+a+a
    sum=sum+a*b*c
print(sum)
