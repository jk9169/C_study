#include<stdio.h>
int main(void){
	int n, temp;
	int arr[20];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", arr[i]);
	}
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
