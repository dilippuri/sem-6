// This is a valid comment
#include<stdio.h>                                                           
#include<conio.h> 

/* Multi
       Line
  Comment 
*/                                                           
void main()                                                                
{                                                                             
   FILE *fp;                                                                     
   char c;                                                                       
   clrscr();                                                                   
   fp=fopen("try.txt","r");                                                    
  do                                                                            
  {                                                                             
   c = getc(fp);                                                                 
   printf("%c",c);                                                              
  }                                                                             
  while(!feof(fp));                                                             
  getch();                                                                      
}
