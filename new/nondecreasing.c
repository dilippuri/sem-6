#include<stdio.h>
int main(){
int i,j;
int n;
scanf("%d",&n);

while(n--){
int size;
scanf("%d",&size);
int a[size];
for(i=0;i<size;i++){scanf("%d",&a[i]);}

int count=0;
int flag=0;

for(i=0;i<size-1;i++){
	if(a[i]<a[i+1]){
		count++;flag++;printf("%d%d\n",count,flag);
	}
	else{
		flag=0;	
	}
	if(flag>1){
		flag--;count++;		printf("xx%d%d\n",count,flag);
	}

}
printf("%d\n",count+size);
}
return 0;
}

/*#include<stdio.h>
int main(){
int i,j;
int n;
scanf("%d",&n);

while(n--){
int size;
scanf("%d",&size);
int a[size];
for(i=0;i<size;i++){scanf("%d",&a[i]);}

int count=0;
i=0;j=i+1;
while(i<size-1){
	while(j<size){
		if(a[i]<a[j]){
			count++;
		}
	i++;j++;
	}
}
printf("%d\n",count);
}
return 0;
}*/
