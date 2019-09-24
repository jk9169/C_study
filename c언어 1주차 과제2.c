#include<stdio.h>
#include<string.h>

int pr_str_array(char **p, int n){
	
	for(int i = 0; i < n; i++){
		printf("%s\n", *(p + i));
	}
}
int main(void){
	
	char *arr[5] = {"Aa", "Bb", "Cc", "Dd", "Ee"};
	
	pr_str_array(arr, 5);
	return 0;
}
