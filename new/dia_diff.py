#!/bin/python
import sys

n = int(raw_input().strip())
a = []
for a_i in xrange(n):
	a_temp = map(int,raw_input().strip().split(' '))
	a.append(a_temp)

k = n-1
b = []

while k>-1:
	b.append(a[k])
	k=k-1

x=0
y=0
for i in xrange(n):
	for j in xrange(n):
		if i==j:
			x=x+a[i][j]
			y=y+b[i][j]

print abs(x-y)
