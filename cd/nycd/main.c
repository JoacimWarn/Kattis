#include <stdio.h>
#include <stdlib.h>

//#define SIZE 8000000000

#define SIZE      40000000
#define HASHSIZE  10000001

int main(){
	
	char* buffer;
	char* bufPtr;
	buffer = malloc(sizeof(char) * SIZE);
	
	int* array;
	
	int repeated, sum;
	long long int number, multiplier;
	int n, m;
	
	int mTurn;
	
	//scanf("%d", &n);
	//scanf("%d\n", &m);
	//sum = n + m;
	
	fread(buffer, 1, SIZE, stdin);
	bufPtr = &buffer[0];
	multiplier = 1;
	
	while(1){
		
		if(*bufPtr == '0') break;
		
		n = m =  mTurn = sum = repeated = number = 0;
		array = malloc(sizeof(int) * HASHSIZE);
		
		//add jills and jacks
		while(*bufPtr != EOF){
			
			if(*bufPtr == '\n'){
				
				bufPtr++;
				break;
				
			}
			
			if(*bufPtr == 32){
				
				multiplier = 1;
				mTurn = 1;
				
			}
			else{
				
				if(!mTurn) n = (n * multiplier) + (*bufPtr - '0');
				else	   m = (m * multiplier) + (*bufPtr - '0');
				multiplier = 10;
				
			}
			
			bufPtr++;
			
		}
		
		sum = n + m;
		
		while(sum > 0){
			
			if(*bufPtr == '\n'){
				
				//new number
				//printf("%d\n", number);
				if(*(array + number)) repeated++;
				else *(array + number) = 1;
				
				number = 0;
				multiplier = 1;
				sum--;
				
			}
			else{
				
				number = (number * multiplier) + (*bufPtr - '0');
				multiplier = 10;
				
			}
			
			bufPtr++;
			
		}
		
		printf("%d\n", repeated);
		free(array);
		
	}
	
	
	return 0;
	
}
