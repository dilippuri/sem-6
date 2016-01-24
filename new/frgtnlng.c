#include<stdio.h>
#include<string.h>

void match(const char *nptr, const char *kptr);


int main(){
int i,j,l;

int n,k;
scanf("%d%d",&n,&k);

char str[n];
char phr[1000];
int x=0;

for(i=0;i<n;i++){char new; scanf("%s",&new);str[i]=new;}

while(k--){
scanf("%d",&l);
for(i=x;i<x+l;i++){char new1; scanf("%s",&new1);phr[i]=new1;}
x=x+l;
}
char *xstr=str;
char *xphr=phr;

printf("%c ", *xstr);
match(xstr,xphr);

return 0;
}

void match(const char *nptr, const char *kptr){
for (; *nptr != '\0'; nptr++){
	for(; *kptr != '\0'; kptr++){
		if(*nptr == *kptr){printf("YES ");}
	}
}

printf("\n");
}
