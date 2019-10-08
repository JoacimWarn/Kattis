#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024 * 1024

int main(){
	
	int n, v, counter, index, size;
	char* buffer;
	char* bufferPtr;
	
	buffer = (char*) malloc(sizeof(char) * SIZE);
	
	scanf("%d\n", &n);
	
	//size = n - 1;
	size = n - 1;
	
	int start[n];
	int stop[n];
	
	v = fread(buffer, 1, SIZE, stdin);
	bufferPtr = buffer;
	
	start[0] = 0;
	counter = index = 0;
	
	while(n > 0){
		
		if(*bufferPtr == '\n'){
			
			stop[counter] = index - 1;
			counter++;
			start[counter] = index + 1;
			n--;
			
		}
		
		index++;
		*bufferPtr++;
		
	}
	
	char* array;
	array = (char*) malloc(sizeof(char) * SIZE);
	
	int a, b, bool, sattIhop;
	a = b = bool = sattIhop = 0;
	
	while(size > 0){
		
		if(*bufferPtr == '\n' || *bufferPtr == '\0'){
			
			sattIhop = 1;
			bool = 0;
			//size--;
			
		}
		else if(*bufferPtr != ' ' && *bufferPtr != '\n'){
			
			if(!bool){
				
				a = a * 10;
				a = a + ((*bufferPtr) - '0');
				
			}
			else{
				
				b = b * 10;
				b = b + ((*bufferPtr) - '0');
				
			}
			//if space character, read b
			
		}
		else if(*bufferPtr == ' ') bool = 1;
		
		if(sattIhop){
			
			char* outPutBuffer;
			
			outPutBuffer = &buffer[start[a-1]];
			
			while(*outPutBuffer != '\n' && start[a - 1] != -1){
				
				printf("%c", *outPutBuffer++);
				
			}
			
			//sätt till -1 så att vi vet redan använd
			start[a - 1] = -1;
			
			outPutBuffer = &buffer[start[b-1]];
			
			while(*outPutBuffer != '\n' && start[b - 1] != -1){
				
				printf("%c", *outPutBuffer++);
				
			}
			
			//sätt till -1 så att vi vet redan använd
			start[b - 1] = -1;
			
			//printf(" a:%d b:%d", a, b);
			
			sattIhop = 0;
			a = 0;
			b = 0;
			size--;
			
			if(*bufferPtr == '\0') break;
			
		}
		
		*bufferPtr++;
		
	}
	
	return 0;
	
}