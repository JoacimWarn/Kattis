#include <stdio.h>

int main(){
    
    unsigned long long int counter;
    unsigned long long int tal1, tal2;
    
    do{
        
        unsigned long long int jack, jill, jackSize;
        counter = 0;
        
        scanf("%llu", &jack);
        scanf("%llu", &jill);
        
        jackSize = jack;
        unsigned long long int jacksAlbums[jack];
        
        while(jack != 0) scanf("%llu", &jacksAlbums[--jack]);
        
        unsigned long long int jillEnters;
        unsigned long long int i;
		unsigned long long int loop;
		loop = 0;
        
        while(jill != 0){
            
            scanf("%llu", &jillEnters);
            
            for(i = loop; i < jackSize; i++){
                
                if(jillEnters == jacksAlbums[i]) counter++;
                
            }
            
            jill--;
			loop++;
            
        }
        
        scanf("%llu", &tal1);
        scanf("%llu", &tal2);
        
    }while(tal1 != 0 || tal2 != 0);
    
    printf("%d", counter);
    
    
    
    return 0;
    
}