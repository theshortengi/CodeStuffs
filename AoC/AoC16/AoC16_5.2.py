import hashlib
given="ojvtpuvg"
password=["z","z","z","z","z","z","z","z"]
complete=False
i=0
while complete==False:
    has=hashlib.md5((given+str(i)).encode('utf-8')).hexdigest()
    if has[:5]=="00000" and has[5].isdigit():
        if int(has[5])>=0 and int(has[5]) <=7 and password[int(has[5])]=="z":
            password[int(has[5])]=has[6]
    if "z" not in password:
        complete=True
    i+=1
print (password)
