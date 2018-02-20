file=open('AoC4.txt','r')
for line in file:
    cipher=""
    checksum=line[line.index("[")+1:line.rindex("]")]
    name=line[:-11]
    ID=int(line[-11:-8])%26
    for ch in name:
        if ch.isalpha():
            final = ord(ch) + ID
            if final > ord("z"):
                final-=26
            cipher+= chr(final)
        else:
            cipher+=" "
    print (cipher)
    print (line[-11:-8])
