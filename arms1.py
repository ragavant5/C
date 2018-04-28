l=int(input("Enter a number:"))
u=int(input("Enter a number:"))
for n in range(l,u+1):
  c=len(str(n))
  temp=n
  s=0
  while (temp>0):
     x=temp%10
     s=s+x**c
     temp=temp/10
  if s==n:
     print n
