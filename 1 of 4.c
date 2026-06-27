#include <stdio.h>

int tribonacci(int n){
	if(n==0){
		return 0;
	} else if (n==1 || n==2){
		return 1;
	} 
	if (n>=3){
		return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
		} 
	return 0;
}


int main(){
	int n, result;
	printf("Enter the value of n:");
	scanf("%d", &n);
	result=tribonacci(n);
	printf("%d", result);
}


