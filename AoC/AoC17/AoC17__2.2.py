file=open('AoC17_2.txt','r')
checksum=0
for line in file:
    nums= list(map(int,(line.strip().split('\t'))))
    for x in range (0,len(nums)):
        for y in range (0,len(nums)):
            if nums[x]>nums[y]:
                if x!=y:
                    if nums[x]%nums[y]==0:
                        checksum=checksum+nums[x]//nums[y]
print(checksum)
