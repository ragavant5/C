n=int(input("Enter a number:"))
s=0
temp=n
while temp>0:
   c=len(str(n))
   x=temp%10
   temp=temp/10
   s=s+x**c
if n==s:
   print n,"is an Armstrong number"
else:
   print n,"is not an Armstrong number"
