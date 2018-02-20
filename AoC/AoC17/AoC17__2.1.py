file=open('AoC17_2.txt','r')
checksum=0
for line in file:
    nums= list(map(int,(line.strip().split('\t'))))
    checksum=checksum+max(nums)-min(nums)
print(checksum)

