#include<stdio.h>
#include<string.h>
int main(void){
	
	int k;
	char arr[20];
	scanf("%d %s", &k, arr);
	for(int i = 0; i < strlen(arr); i++){
		
		for(int j = 0; j < k; j++){
		
		printf("%c", arr[i]);
		}
	}
	  
	return 0;
}
