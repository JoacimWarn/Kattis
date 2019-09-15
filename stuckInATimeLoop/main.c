#include <stdio.h>

typedef unsigned int Uint;

int main(){
	
	Uint n, i;
	
	scanf("%u", &n);
	
	for(i = 1; i <= n; i++){
		
		printf("%u Abracadabra\n", i);
		
	}
	
	return 0;
	
}