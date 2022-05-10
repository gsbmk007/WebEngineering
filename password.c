#include<stdio.h>
#include<unistd.h>
#include <string.h>
#include <ctype.h>
#include<math.h>
char password[100];

int uppercase(char p[]){
	int c;
	for(int i=0;i<=strlen(p);i++)
	{ c=p[i];
		if ((c>=65)&(c<=90)){
	printf("\t\t\t\tContaints Upper case charecter\n");
			c=1;
			break;
		}else{
			continue;
		}
		}
	return c;
}
int lower(char p[]){
	int c;
	for(int i=0;i<=strlen(p);i++)
		{ c=p[i];
			if ((c>=97)&(c<=9122)){
		printf("\t\t\t\tContaints Lower case charecter\n");

				c=1;
				break;
			}else{
				continue;
			}
		}
	return c	;
}
int number(char p[]){
	int c=0;
	for(int i=0;i<=strlen(p);i++)
		{ c=p[i];
			if (isdigit(c)){
			printf("\t\t\t\tContaints Number \n");

				c=1;
				if(p[i+1]==p[i]+1){
					
			printf("\t\t\t\tContains consequent numbers \n");
					c=0;
				}
				break;
			}else{
				continue;
			}
		}
	return c;
	
}
int chare(char p[]){
	int c=0;
	for(int i=0;i<=strlen(p);i++)
		{ c=p[i];
			if((c>=32&&c<=47)|(c>=58&&c<=64)|(c>=91&c<=96)|c>=123&c<=126){
				printf("\t\t\t\tContaints Special charecter\n");

				c=1;
				break;}
			else{
				continue;
			}}
	return c;}

	
	
	

int main(){
	printf("\t\t\t\tWelcome to Password Checker \n\n\n\n");
	char *password = getpass("\n\t\t\tEnter the password :");
	printf("\t\t\tPassword Contains %lu 
characters\n",strlen(password));
	int 
sum=(uppercase(password)+lower(password)+number(password)+chare(password));
	if(sum){
		printf("\t\t\t\t\t\t\t\t\t\t%d/100",sum*25);
	}}
