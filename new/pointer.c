#include<stdio.h>

void match(const char *nptr, const char *kptr);

int main (void){
char string[] = "print characters of a string";
char joy[] = "like you print";

match(string,joy);
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
