x = int(raw_input())
nam=[]
no=[]
i=0
while i<x:
	name = raw_input()
	num = float(raw_input())
	nam.append(name)
	no.append(num)
	i=i+1

score = map(lambda x,y:[x,y],nam,no)
sort = sorted(score, key=lambda tup: tup[1])

a=sort[0][1]

for j in xrange(len(sort)):
	if sort[j][1]==a:
		sort[j][1]=float('inf')

sort1 = sorted(sort, key=lambda tup: tup[1])
b=sort1[0][1]

out=[]
i=len(sort1)-1
while i>-1:
	out.append(sort1[i])
	i=i-1

for i in xrange(len(out)):
	if out[i][1]==b:
		print out[i][0]
