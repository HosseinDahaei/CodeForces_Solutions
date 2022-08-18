string=input()
  for i in range(0,len(string)):
    if string[i]=="H" or string[i]=="Q"  or string[i]=="9" :
        print("YES")
        exit()
print("NO")