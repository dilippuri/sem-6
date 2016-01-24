x=raw_input()
m=raw_input()
list1 = m.split()
newlist1 = list(map(int, list1))

y=raw_input()
n=raw_input()
list2 = n.split()
newlist2 = list(map(int, list2))

set1=set(newlist1)
set2=set(newlist2)

set3=set1.union(set2)
set4=set1.intersection(set2)
set5=set3.difference(set4)
lis = list(set5)
lis.sort()

for i in lis:
      print i
