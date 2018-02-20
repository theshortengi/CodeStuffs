import hashlib
given="ojvtpuvg"
password=""
complete=False
i=0
while complete==False:
    has=hashlib.md5((given+str(i)).encode('utf-8')).hexdigest()
    if has[:5]=="00000":
        print (has)
        password+=has[5]
        if len(password)==8:
            complete=True
    i+=1
print (password)
    
