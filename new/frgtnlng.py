n=int(raw_input());k=int(raw_input());

string = [];pharse = [];out = [];i=0;

while(i<n):
	x=raw_input();
	string.append(x);
	i=i+1;

i=0;j=0;
while(i<k):
	y=int(raw_input());
	while(j<y):
		z=raw_input();
		pharse.append(z);
		j=j+1;
	i=i+1;

for a in string:
	if(a in pharse):
		out.append('YES ');
		#print 'YES ';
	else:
		out.append('NO ');
		#print 'NO ';
print ''.join(out)
