#include <stdio.h>

int main(){
	
	int N, K, O, ans;
	
	ans = 1;
	
	scanf("%d", &N);
	
	while(N > 0){
		
		scanf("%d", &K);
		
		ans = 1;
		
		while(K > 0){
			
			scanf("%d", &O);
			
			ans = ans - 1 + O;
			
			K--;
			
		}
		
		printf("%d\n", ans);
		
		N--;
		
	}
	
	return 0;
	
}