#include<stdio.h>
int main(void){
	char arr[6]={'J', 'U', 'N', 'G', 'O', 'L'}, x;
	scanf(" %c", &x);
	switch(x){
	case 'J':
		printf("0");
		break; 
	case 'U':
		printf("1");
		break;
	case 'N':
		printf("2");
		break;
	case 'G':
		printf("3");
		break;
	case 'O':
		printf("4");
		break;
	case 'L':
		printf("5"); 
		break;
	default:
		printf("none");
	}
	return 0;
}
