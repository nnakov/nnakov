#include <stdio.h>

int main() {
    
    int n,flag=0,middle=0,i=0,repeat;
    printf("Input the max number of the sequence:\n");
    scanf("%d", &n);
    
    int ascending[n];
    
    printf("Input the terms of the sequence:\n");
    
    while(i<n) {
        scanf("%d", &ascending[i]);
        i++;
        
    }
    
    for(int y=0; y<n; y++) {
        
        for(int x=0; x<n; x++) {
           
            if(ascending[y] < ascending[x]) {
               middle = ascending[y];
               ascending[y] = ascending[x];
               ascending[x] = middle;
            }
           
        }
        
    }
    
    for(int y=0; y<n; y++) {
        
 
        for(int z=0; z<n; z++) {
          
            
            if(ascending[y] == ascending[z]) {
                flag++;
                if(flag>1) {
                    repeat = ascending[y];
           
                } 
            }
   
        }
        flag=0;
        
    }
    
     for(int y=0; y<n; y++) {
        
     printf("ascending[%d] = %d\n", y,ascending[y]);

    }
         printf("Most repeated number = %d", repeat);
    return 0;
}
