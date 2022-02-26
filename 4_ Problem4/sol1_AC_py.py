s=input()
sum=0
for c in s:
    sum+= int(c)

if ( sum%9 !=0 or (int(s[-1]))%2 ) :
    print("NO")
else :
    print("YES")


