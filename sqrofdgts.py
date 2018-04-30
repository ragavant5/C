n=int(input())
i=1
s=0
while(n>0):
  rem=n%10
  n=n/10
  i=i+1
  s=s+(rem**2)
print s
