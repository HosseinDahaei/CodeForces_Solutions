def lucky(n):
    while(n):
        if(n%10!=4 and n%10!=7):
            return 0
        n=int(n/10)
    return 1
  def almostlucy(n):
    if lucky(n):
        return 1
    for i in range(1,n):
        if lucky(i) and n%i==0:
            return 1
    return 0
 n=int(input())
if almostlucy(n):
    print("YES")
else :
    print("NO")