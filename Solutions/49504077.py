def issame(data):
    if len(data)%2==1:
        return 0
    data.sort()
    for i in range(0,int(len(data)/2)):
        if data[2*i]!=data[2*i+1]:
            return 0
    return 1
 n=int(input())
data=list(map(int,input().split()))
x=1
y=1
if issame(data)==1:
    data.sort()
    x=data[-1]
    y=x
    print(x,y)
    exit()
data.sort()
y=data[-1]
i=0
while len(data)>0 and i<len(data):
    if(y%data[i]==0):
        j=i
        if i<len(data)-1:
            if data[i+1]!=data[i]:
                i-=1
        del data[j]
    i+=1
data.sort()
x=data[-1]
print(y,x)
  