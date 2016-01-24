# Enter your code here. Read input from STDIN. Print output to STDOUT
num = int(raw_input())
str_arr = raw_input().split(' ')
arr = [int(num) for num in str_arr]
arr.sort()

a = max(arr)

for i in xrange(len(arr)):
	if arr[i]==a:
		arr[i]=None		

b=max(arr)
print b
