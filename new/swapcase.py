from __future__ import print_function
import re

s = raw_input()
a=re.split('(\d+)',s)

if a[6]=='PM':
	a[1]=int(a[1])+12

if a[1]==24:
	a[1]=00

print(a[1],':',a[3],':',a[5], sep='')
