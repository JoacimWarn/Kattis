#include <stdio.h>

#define SIZE 20
#define CONT 5

int main(){
	
	int matrix[SIZE];
	int score[CONT];
	int i, j, max, player;
	
	for(i = 0; i < CONT; i++) score[i] = 0;
	for(i = 0; i < SIZE; i++) matrix[i] = 0;
	
	for(i = 0; i < SIZE; i++){
		
		if(((i%4) == 0) && (i != 0)) j++;
		
		scanf("%d", &matrix[i]);
		
	}
	
	for(i = 0, j = 0; i < SIZE; i++){
		
		if(((i%4) == 0) && (i != 0)) j++;
		
		score[j] = score[j] + matrix[i];
		
	}
	
	max = score[0];
	player = 0;
	
	for(i = 0; i < CONT; i++){
		
		if(score[i] > max){
			
			player = i + 1;
			max = score[i];
			
		}
		
	}
	
	printf("%d %d", player, max);
	
	return 0;
	
}