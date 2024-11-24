#include <stdio.h>

// Fibonaaci series.
int main ()

{
    // 0 , 1, 1, 2, 3, 5, 8, 13, 20, 33
    
    int N,i;
    int a = -1;
    int b = 1;
    int c;
    
    printf(" N VAL :");
    scanf("%d",&N);
    
    
    for(i=1;i<=N;i++)
    
    {
        c = a + b;
        
        printf(" %d \n", c);
        
        a = b;
        b = c;
        
    }
    
    return 0;
}