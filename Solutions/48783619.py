n=int(input())
max=1
 s=input().split()
for i in range(0,len(s)):
    s[i]=int(s[i])
    if s[i]>max:
        max=s[i]
  if(max<26):
    print(0)
else :
    print(max-25)