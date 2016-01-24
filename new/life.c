#include<stdio.h>
int main(){
int j,correct;
int i=1;
int incorrect[100];

while(i){
scanf("%d", &correct);

if(correct==42){break;}
else{incorrect[i]=correct;}
i++;
}

for(j=1; j<i; j++)
printf("%d\n",incorrect[j]);

return 0;}
