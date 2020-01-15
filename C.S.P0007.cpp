#include<stdio.h>
#include<string.h>
#include<conio.h>
void remove(char str[], int removeposition){
 	int n=strlen(str);
 	for(int i=removeposition;i<n;i++){
 		str[i]=str[i+1];
	}
	str[n-1]='\0';
}
void removeblank(char str[]){
	for (int i=0;i<strlen(str);i++){
		if (str[i]==' ' && str[i+1]==' '){
			remove(str,i);
			i--;
		}
		if(str[0]==' ') remove(str,0);
		if(str[strlen(str)-1]==' ') remove(str,strlen(str)-1);
	}
}
int main(){
	char str[100],key;
	do{
		printf("Please enter a string:");
		gets(str);
		printf("The after romoving:");
		removeblank(str);
		puts(str);
		printf("Press enter to continue, Esc to exit");
		key=getch();
	} while (key!=27);	
	getchar();
	return 0;
}
