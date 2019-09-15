#include <stdio.h>

int main(){
	
	int x, n, p, i, internetSum;
	
	scanf("%d", &x);
	scanf("%d", &n);
	
	internetSum = x;
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &p);
		
		internetSum = internetSum + x - p;
		
	}
	
	printf("%d", internetSum);
	
	return 0;
	
}