#include<stdio.h>
int main(void){

	int i = 0, arr[100];
	while(1){
		scanf("%d", &arr[i]);
		if(arr[i] == 0)
			break;
		else	
			i++;
	}
	
	for(i = i - 1; i >= 0; i--){
		printf("%d ", arr[i]);
	}	
		
	


	return 0;
}
