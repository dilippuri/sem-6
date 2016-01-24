# Enter your code here. Read input from STDIN. Print output to STDOUT
num=int(raw_input())

i=0
while i<num:
    i=i+1
    a = [int(x) for x in raw_input().split()]
    area=a[0]*a[1]
    for j in range(1, min(a)+1):
        ar=j*j
        if area%ar==0:
            out=area/ar
    print out            
