#include <stdio.h>

int main()
{
    int n,s,num=1;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    s=(n-1);
    
    for(int i=1; i<=n; i++) {
        
        if(num<=10  && n>=5) {
        printf(" ");
        printf(" ");
        }
        for(int y=1; y<=i; y++) {
            
             
            for(s; 0<s; s--) {
                printf(" ");
                
            }
            
            printf("%d ", num);
            num++;
        }
        s = (n-1) - i;
      
        printf("\n");
       
    }
    
    return 0;
}
