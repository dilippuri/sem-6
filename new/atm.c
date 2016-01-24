#include<stdio.h>
int main(){
int amount;float bal;
scanf("%d%f", &amount, &bal);
if(amount%5==0 && bal>=amount+.50){bal = bal - amount - 0.50;printf("%.2f\n",bal);}
else{printf("%.2f\n",bal);}
return 0;
}
