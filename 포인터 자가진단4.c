#include<stdio.h>
int main(void){
	int arr[5];
	for(int i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
	}
	int *p = NULL;
	p = arr;
	printf("%d %d %d", *p, *(p+2), *(p+4));
	
	return 0;
}
