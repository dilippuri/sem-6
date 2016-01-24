# Enter your code here. Read input from STDIN. Print output to STDOUT
num = int(raw_input())
i=0
while i<num:
	a = [int(z) for z in raw_input().split()]
	x = a[2]-a[0]+a[2]
	y = -a[1]+a[3]+a[3]
	print x,y
	i=i+1
