#include<stdio.h>
#include<stdlib.h>

int fact(int  n){

int c,count = 1;

for (c = 1; c <= n; c++)
    count = count * c;

return count;
}

int main(){

int no,j,temp;

scanf("%d",&no);

int *a=(int *)malloc(sizeof(int)*no);

for(j=0; j<no; j++){
	scanf("%d",&temp);
	a[j] = fact(temp);
}


for(j=0;j<no;j++)
printf("%d\n",a[j]);

return 0;
}
