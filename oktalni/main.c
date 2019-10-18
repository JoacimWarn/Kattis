#include <stdio.h>

#define SIZE 101

int main(){
	
	char buffer[SIZE];
	char* bufferPtr;
	
	int v, counter, octal, binary, decimal;
	
	v = fread(buffer, 1, SIZE, stdin);
	bufferPtr = &buffer[v - 1];
	
	counter = octal = decimal = 0;
	binary = 1;
	
	/*
	while(v > 0){
		
		*bufferPtr = *bufferPtr - '0';
		
		if(*bufferPtr == 1){
			
			octal = octal + binary;
			
		}
		
		binary = binary * 2;
		bufferPtr--;
		v--;
		
	}
	
	printf("%o", octal);
	*/
	
	while(v > 0){
		
		counter++;
		*bufferPtr = *bufferPtr - '0';
		
		if(*bufferPtr == 1){
			
			decimal = decimal + binary;
			printf("%d\n", decimal);
			
		}
		
		binary = binary * 2;
		
		if(counter > 2){
			
			//octal = octal * 10;
			octal = octal + decimal;
			
			binary = 1;
			counter = 0;
			decimal = 0;
			
		}
		
		bufferPtr--;
		v--;
		
	}
	
	//printf("%o", 204);
	printf("%d", octal);
	
	/*
	while(v > 0){
		
		*bufferPtr = *bufferPtr - '0';
		
		if(*bufferPtr == 1){
			
			if(((octal + binary) % 8) == 0){
				
				
				
			}
			
			//printf("%d\n", binary);
			//octal = octal + binary;
			
		}
		
		printf("%d", *bufferPtr);
		
		v--;
		binary = binary * 2;
		bufferPtr--;
		
	}
	*/
	
	//printf("%d", octal);
	
	return 0;
	
}