import math
nn=int(input())
arr=list(map(int,input().split()))
p=0
n=0
z=0
for i in arr:
    if i>0:
        p+=1
    if i==0:
        z+=1
    if i<0:
        n+=1
if p>=math.ceil(nn/2):
    print(1)
elif n>=math.ceil(nn/2):
    print(-1)
else:
    print(0)