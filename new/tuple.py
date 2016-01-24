# Enter your code here. Read input from STDIN. Print output to STDOUT
import __builtin__

num = int(raw_input())
i=0
l=list()
while i<num:
	i=i+1
	line = raw_input()
	sp = line.split(' ')
	
	for j in sp:
		l.append(int(j))
	t=tuple(l)
	print hash(t)
