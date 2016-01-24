#include<stdio.h>
int main(){
int i;int no_of_test,divisor;int count=0;

scanf("%d%d",&no_of_test,&divisor);
int test[no_of_test];

if(divisor == 0){return 0;}

else{

for(i=0; i<no_of_test; i++){
	scanf("%d",&test[i]);
}

for(i=0; i<no_of_test; i++){
	if(test[i]%divisor==0){
		count++;
	}
}
printf("%d\n",count);
}

return 0;}
