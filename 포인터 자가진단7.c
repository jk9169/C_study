#include<stdio.h>

int main(void){
	int data[100];
	int *p = data;
	int x;
	int index, temp;
	scanf("%d", &x);
	for(int i = 0; i < x; i++){
		scanf("%d", &data[i]);
	}
	
	for(int i = 0; i < x - 1; i++){
		index = i;
		for(int j = i + 1; j < x; j++){
			if(data[index] < data[j])
			index = j;
		}
		if( i != index){
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		}
	}
	
	for(int i = 0; i < x; i++)
		printf("%d ", p[i]); 
		return 0;
}
