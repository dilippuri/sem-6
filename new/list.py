# Enter your code here. Read input from STDIN. Print output to STDOUT
num=int(raw_input())
L=[]
i=0
while i<num:
	x=raw_input().split()
	i=i+1
	if(x[0]=='insert'):
		L.insert(int(x[1]), int(x[2]))
	if(x[0]=='print'):
		print L
	if(x[0]=='append'):
		L.append(int(x[1]))
	if(x[0]=='remove'):
		L.remove(int(x[1]))
	if(x[0]=='pop'):
		L.pop()
	if(x[0]=='index'):
		L.index(int(x[1]))
	if(x[0]=='count'):
		L.count(int(x[1]))
	if(x[0]=='sort'):
		L.sort()
	if(x[0]=='reverse'):
		L.reverse()
