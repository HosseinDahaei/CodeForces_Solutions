s1=input()
s2=input()
 for i in range(0,len(s1)):
    if(s1.lower()<s2.lower()):
        print("-1")
        exit()
    elif(s1.lower()>s2.lower()):
        print("1")
        exit()
 print("0")