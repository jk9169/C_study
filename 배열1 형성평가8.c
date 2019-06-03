#include<stdio.h>
int main(void){
	int arr[100], k = 0 ,n = 0, sum = 0;
	for(int i = 0; i < 100; i++){
		scanf("%d", &arr[i]);
		
		if(arr[i] % 5 == 0 && arr[i] != 0)
		{
				
				sum +=arr[i];
				n++;
			}
		if(arr[i] == 0)
		break;
		
		
	}
	printf("Multiples of 5 : %d\nsum : %d\navg : %.1f", n, sum, (float)sum/n );
	
	return 0;
}
