#include<stdio.h>

int main(){
int no_of_test,i,x;
//printf("Enter the no of test cases: ");
scanf("%d",&no_of_test);
x=no_of_test;
int ans[no_of_test];

while(no_of_test--){
int j,k,a;
int b=1;

//printf("Enter the size of matrix: ");
scanf("%d",&a);

int testcase[a][a];
int count=0;
int step1,step2;

for(j=0;j<a;j++){
	for(k=0;k<a;k++){
		scanf("%d",&testcase[j][k]);
	}
}

for(i=0;i<a;i++){
	for(j=0;j<a;j++){
		if(testcase[i][j]==b){
			step1=i;
			step2=j;
			break;
		}
	}
}

while(b<=(a*a)){
for(j=0;j<a;j++){
	for(k=0;k<a;k++){
		if(testcase[j][k]==b){
			count=abs(step1-j)+abs(step2-k)+count;
			step1=j;
			step2=k;
			b++;
		}
	}
}}
ans[no_of_test]=count;
//printf("%d\n",count);
}

for(i=x-1;i>=0;i--){printf("%d\n",ans[i]);}

}
