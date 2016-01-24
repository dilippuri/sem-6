#include <stdio.h>

void main(int argc, char* argv[]){

int linecount=0, comment=0, multiline=0, mulcomment=0;

FILE *file;

char ch;
file = fopen(argv[1], "r");

while((ch = fgetc(file)) != EOF){
	if(ch  ==  '\n'){
		linecount++;
	}
}

fseek(file, 0, 0);
while((ch = fgetc(file)) != EOF){
	if(ch  ==  '/'){
		if((ch = fgetc(file)) == '/'){
                    comment++;
		}
	}
}

fseek(file, 0, 0);
while((ch = fgetc(file)) != EOF){
	if(ch  ==  '/'){
		if((ch = fgetc(file)) == '*'){
			mulcomment++;
		}
	}
}

printf("Total no of lines: %d\n", linecount);
printf("Total no of comment line: %d\n", comment);
printf("Total no of multi-comment line: %d\n", mulcomment);

}
