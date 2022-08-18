n=input()
n=int(n)
result=0
result= n//100
n=n%100
 result+= n//20
n=n%20
 result += n//10
n=n%10
 result+= n//5
n=n%5
 result+= n//1
  print(result)