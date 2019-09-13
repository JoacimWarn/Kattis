#include <stdio.h>

int main(){
	
	unsigned long long int jack, jill, maxArray;
	unsigned int counter;
	
	scanf("%llu", &jack);
	scanf("%llu", &jill);
	
	unsigned long long int jacksAlbums[jack];
	unsigned long long int  jillAlbums[jill];
	
	unsigned long long int elements[jill];
	
	//if(jack >= jill) unsigned long long int elements[jill];
	//else			 unsigned long long int elements[jack];
	
	unsigned long long int jackyIndex, jillyIndex;
	jackyIndex = jack;
	jillyIndex = jill;
	
	while(jack != 0) scanf("%llu", &jacksAlbums[--jack]);
	while(jill != 0) scanf("%llu",  &jillAlbums[--jill]);
	
	counter = 0;

	int i, j;
	
		for(i = 0; i < jackyIndex; i++){
			
			for(j = i; j < jillyIndex; j++){
				
				if(jacksAlbums[i] == jillAlbums[j]){
					
					//if both are same and element already dont exist
					for(int loop = 0; loop < jill; loop++){
						
						
						
					}
					
				}
				
			}
			
		}
	
	scanf("%llu", &jack);
	scanf("%llu", &jill);
	
	if((jack == 0) && (jill == 0)) printf("%d", counter);
	
	return 0;

}