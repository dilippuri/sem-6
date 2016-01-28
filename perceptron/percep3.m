function [ h ] = percep3(pt)

data = load('modified_iris.txt');
yr=data(1:100);
input=data(:,2:5);
x=zeros(1,4);

for i=1:100
	x=(x+input(i,:))/2;
endfor

if sum(x-pt)<0
	h=0
endif
if sum(x-pt)>0
	h=1
endif

end
