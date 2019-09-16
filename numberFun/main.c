#include <stdio.h>

int main(){
	
	int n, i, a, b, c;
	
	scanf("%d", &n);
	
	int possible[n];
	
	for(i = 0; i < n; i++){
		
		possible[i] = 0;
		
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		
		if(((a - b) == c) || ((b - a) == c) || ((a + b) == c)) possible[i] = 1;
		if(((a * b) == c)) possible[i] = 1;
		
		//division
		if(((a / b) == c) && ((a % b) == 0)) possible[i] = 1;
		if(((b / a) == c) && ((b % a) == 0)) possible[i] = 1;
		
	}
	
	for(i = 0; i < n; i++){
		
		if(possible[i] == 1) printf("Possible\n");
		else				 printf("Impossible\n");
		
	}
	
	return 0;
	
}