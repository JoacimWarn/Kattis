#include <stdio.h>

int main(){
	
	unsigned long int n;
	
	scanf("%lu", &n);
	
	if((n % 2) == 0) printf("Bob");
	else			 printf("Alice");
	
	return 0;
	
}