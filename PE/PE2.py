x=0
y=1
z=0
sum=0
while z<4000000:
	z=x+y
	if z%2==0:
    	sum=sum+z
	x=y
	y=z
print (sum)
