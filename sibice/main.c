#include <stdio.h>
#include <math.h>

int main(){
	
	//n - matches on the floor
	//w - width of box
	//h - height of box
	
	int n, w, h, i, match;
	
	scanf("%d", &n);
	scanf("%d", &w);
	scanf("%d", &h);
	
	//calculate sqrt(h^2 + w^2)
	int hyp = sqrt(h*h + w*w);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &match);
		
		if(match > hyp) printf("NE\n");
		else			printf("DA\n");
		
	}
	
	return 0;
	
}