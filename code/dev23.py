def mod(a,b,c):
	if(b==0):
		return 1
	if(b%2==0):
		x=mod(a,b/2,c)
		return (x*x)%c;
	return (a*mod(a,b-1,c))%c

#fil=open("output.txt","w")
n=input()
n=int(n)
for i in range(n):
	a,b,c=input().split()
	a,b,c=int(a),int(b),int(c)
	print('Case %d: %d'%(i+1,mod(a,b,c)))
	#fil.write('Case %d: %d\n'%(i+1,mod(a,b,c)))
#fil.close()



