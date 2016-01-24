#include<stdio.h>
int main(){
int i,j,k,l;
int n;
scanf("%d",&n);

while(n--){
int count=0;
int size;
scanf("%d",&size);
int sum=0;
int prod=1;

for(i=0; i<size; i++){
scanf("%d",&j);
prod= prod*j;
sum = sum+j;}
if(prod==sum){count++;}
printf("%d\n",count+size);}
return 0;
}
