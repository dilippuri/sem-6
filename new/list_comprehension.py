# Enter your code here. Read input from STDIN. Print output to STDOUT
a=int(raw_input())
b=int(raw_input())
c=int(raw_input())
n=int(raw_input())

listoflists = []
out=[]

def generate(x,y,z):
	for i in xrange(x+1):
		for j in xrange(y+1):
			for k in xrange(z+1):
				if [i,j,k] not in listoflists:
					listoflists.append([i,j,k])

generate(a,b,c)
for j in listoflists:
	if(sum(j)!=n):
		out.append(j)

print out
