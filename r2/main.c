#include <stdio.h>

int main(){
	
	//s = ((r1 + r2)/2)
	//
	//2*s = r1 + r2 <==> r2 = 2*s - r1
	
	int r1, r2, s;
	
	scanf("%d", &r1);
	scanf("%d",  &s);
	
	r2 = 2*s - r1;
	
	printf("%d", r2);
	
	return 0;
	
}