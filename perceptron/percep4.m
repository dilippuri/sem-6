data_train = load('Iris_data_norm_train.txt');
data_test = load('iris_data_norm_test.txt');

error1=0;
error2=0;

for n=1:100
w=rand(1,4);
threshold = 99;

ein=0;
for i=1:110
	x=data_train(i,1:4);
	y=w*x';
	class=data_train(i,5);
	h=sign(y-threshold);

	if(class!=h && h!=0)
		w = w + class*x;
		ein++;
	endif
endfor
error1=ein/70;
endfor

eout=0;
for i=1:40
	x=data_test(i,1:4);
	y=w*x';
	class=data_test(i,5);
	h=sign(y-threshold);

	if(class!=h&& h!=0)
		eout++;
	endif
endfor
error2=eout/30;

plot(n,error1,'g')
plot(n,error2,'r')
hold on;


