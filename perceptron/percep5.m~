function[out]=percep5(xx)

data = load('iris.txt');
desired=data(1:150);
inp=data(:,2:5);
w=rand(1,4);
threshold = 100;

for i=1:150
	x=inp(i,:);
	y=w*x';
	if(desired(i)!=1 && y>threshold)
		w = w - x;
		threshold = threshold + y/2;
	endif

	if(desired(i)==1 && y<threshold)
		w = w + x;
		threshold = threshold - y/2;
	endif
%plot(i,w);
%hold on;
endfor
out=0;
if(w*xx'>threshold)
	out=1;
endif
%xlabel('No of iteration');
%ylabel('Weights');
%title('Plot of the Weight update function');
%legend('w1','w2','w3','w4');
%axis([0,170]);
end
