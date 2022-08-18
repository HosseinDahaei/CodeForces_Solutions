s=input().split('+')
for i in range(0,len(s)):
    s[i]=int(s[i])
s.sort()
for i in range(0,len(s)):
    s[i]=str(s[i])
 news=""
for i in range(0,len(s)):
    news=news+s[i]
    if i!=len(s)-1:
        news=news+"+"
print(news)