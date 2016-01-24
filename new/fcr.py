import numpy
str_arr = raw_input().split(' ')
arr = [float(num) for num in str_arr]

print numpy.floor(arr)
print numpy.ceil(arr)
print numpy.rint(arr)
