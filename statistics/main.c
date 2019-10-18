#include <stdio.h>

#define SIZE 10

int main(){
	
	int max[SIZE];
	int min[SIZE];
	int range[SIZE];
	
	int testCases, n, i, j, temp, size_i;
	
	for(i = 0; i < SIZE; i++){
		
		max[i] = 0;
		min[i] = 30;
		range[i] = 0;
		
	}
	
	i = 0;
	do{
		
		scanf("%d", &n);
		if(n == 0) break;
		
		while(n > 0){
			
			scanf("%d", &temp);
			
			if(temp > max[i]) max[i] = temp;
			if(temp < min[i]) min[i] = temp;
			
			n--;
			
		}
		
		range[i] = max[i] - min[i];
		
		i++;
		
	}while(1);
	
	size_i = i;
	
	for(i = 0; i < size_i; i++){
		
		printf("Case %d: %d %d %d\n", i + 1, min[i], max[i], range[i]);
		
	}
	
	return 0;
	
}
