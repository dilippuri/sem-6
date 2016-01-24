#include<stdio.h>
#include<stdlib.h>

int find(int  n){
int count = 0;int i;
for (i=5; n/i>=1; i *= 5){
count += n/i;}
return count;
}

int main(){
int no,j,temp;

scanf("%d",&no);

int *a=(int *)malloc(sizeof(int)*no);

for(j=0; j<no; j++){
scanf("%d",&temp);
a[j] = find(temp);

}


for(j=0;j<no;j++)
printf("%d\n",a[j]);

return 0;
}
