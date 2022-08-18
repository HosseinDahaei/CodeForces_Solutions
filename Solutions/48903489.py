import math
n,m,a=input().split()
n=int(n)
m=int(m)
a=int(a)
print( math.ceil(m/a)*math.ceil(n/a) )