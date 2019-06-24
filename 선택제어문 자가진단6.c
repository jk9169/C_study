#include<stdio.h>
int main(void){
	
	char ch;
	int x;
	scanf("%c %d", &ch, &x);
	
	if(ch == 'M' && x >=18){
		printf("MAN");
	} 
	
	else if(ch == 'F' && x >=18){
		printf("WOMAN");
	}
	
	else if(ch == 'M' && x < 18){
		printf("BOY");
	}
	
	else if(ch == 'F' && x < 18){
		printf("GIRL");
	}
	return 0;
}
