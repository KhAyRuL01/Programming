while True:
	x,y=input().split(",")
	if x=="EOF":
		break;
	x,y=str(reversed(x)),str(reversed(y))
	x,y=int(x),int(y)
	z=x+y
	z=str(z)
	z=str(reversed(z))
	z=int(z)
	print(z)

	
