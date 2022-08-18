n,t=input().split()
n=int(n)
t=int(t)
s=input()
s=list(s)
 for i in range(0,t):
    j=0
    while j <n-1 :
        if s[j]=="B" and s[j+1]=="G":
            s[j]="G"
            s[j+1]="B"
            j+=+1
        j+=1
s2=""
for i in range(0,len(s)):
    s2=s2+s[i]
 print(s2)
    