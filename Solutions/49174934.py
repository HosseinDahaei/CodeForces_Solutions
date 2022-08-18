string=input()
string=list(string)
counter=0
for i in range(0,len(string)):
    if string[i] in "oOUueEaAyYiI":
        string[i]='$'
        counter+=1
for i in range(0,counter):
    string.remove('$')
   for i in range(0,len(string)):
    print("."+string[i].lower(),end="")
   