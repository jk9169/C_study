#include<stdio.h>
int main(void){
	
	char ch;
	scanf("%c", &ch);
	
	switch(ch){
		case 'A':
			printf("Excellent");
			break;
		
		case 'B':
			printf("Good");
			break;
			
		case 'C':
			printf("Usually");
			break;
		
		case 'D':
			printf("Effort");
			break;
			
		case 'F':
			printf("Failure");
			break;
		
		default :
			printf("error");
			break;
			
	}
	return 0;
}
