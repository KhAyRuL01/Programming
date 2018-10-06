fib=['a','b']
def fibo():
	for i in range(2,81):
		x=fib[i-2]+fib[i-1]
		fib.append(x)
		print(i)
		

fibo()	
n=input()
n=int(n)
for i in range(1,n+1):
	a,b=input().split()
	a,b=int(a),int(b)
	z=fib[a].index(b)
	print('Case %d: %d'%(i,z))

	
