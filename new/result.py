# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(raw_input())
result = dict()
i=0
while i<n:
	x=raw_input()
	sp=x.split()
	result[sp[0]]=sp
	i=i+1

name=raw_input()
per=result[name]

new=(float(per[1])+float(per[2])+float(per[3]))/3.00

print "%.2f" % (new)
