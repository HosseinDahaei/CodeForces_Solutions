n=input()
situation=n[0]
counter=1
for i in range(1,len(n)):
    if n[i]==situation:
        counter+=1
    else :
        counter=1
        situation=n[i]
    if counter==7:
        print("YES")
        exit()
print("NO")