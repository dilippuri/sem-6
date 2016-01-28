w=ones(1,4);

data = load('modified_iris.txt');
z=ones(1,100);
for i=1:100
	x = data(i,:);
if(x(1)==0)
	y=0;
	for j=1:4
		y=y+x(j+1)*w(j);
	endfor
	z(1,i)=y;
	z(2,i)=-1;
	plot(i,y);
	hold on;
endif
if(x(1)==1)
	y=0;
	for j=1:4
		y=y+x(j+1)*w(j);
	endfor
	z(1,i)=y;
	z(2,i)=1;
	plot(i,y,'r');
	hold on;
endif
endfor

weight=zeros(100,1);
data1=z(1,:);
yr=z(2,:);
b=0;

for m=1:10
for k=1:100
	a=data1*weight+b;
	if yr(k)*a <= 0
		weight(k)=weight(k)+yr(k)*data1(k);
		b=b+yr(k);
	endif
endfor
endfor
