data = load('modified_iris.txt');
yr=data(1:100);
input=data(:,2:5);
w=zeros(1,4);
b=0;

for m=1:10
	for k=1:100
		xx=input(k,:);
		a=w*input(k,:)'+b;
%		if yr(k)*a <= 0
			for i=1:4
				w(i)=w(i)+yr(k)*xx(i);
			endfor
			b=b+yr(k)
%		endif
	endfor
endfor
w
