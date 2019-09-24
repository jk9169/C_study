#include<stdio.h>
void max_func(int *x, int **y){
	int max = *x;
	for(int i = 1; i < 5; i++){
		if(max < *(x + i))
			max = *(x + i);
			*y = x + i;
	}
}
int main(void){
	
	int num[5] = {5, 6, 1, 3, 7};
	int *p;
	max_func(num, &p);
	printf(" max = %d", *p);
	return 0;
}
