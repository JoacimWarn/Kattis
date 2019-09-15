#include <stdio.h>

#define SIZE 1024

int main(){
	
	char buffer[SIZE];
	int n, i, c, counter;
	
	scanf("%d", &n);
	i = counter = 0;
	
	while(fgetc(stdin) != '\n');
	
	while((c = fgetc(stdin)) != '\n'){
		
		buffer[i] = c;
		if(c == '-') counter++;
		i++;
		
	}
	
	//for(c = 0; c < i; c++) printf("%c", buffer[c]);
	printf("%d", counter);
	
	return 0;
	
}