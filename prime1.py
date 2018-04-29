lr=int(input())
ur=int(input())
for n in range(lr,ur+1):
	if (n>1) :
		for i in range(2,n):
			if(n%i==0):
				break
		else:
			print(n)
