#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    
    int number,guess;
    int Gtimes = 1;
    
    srand(time(0));
    number = rand() % 100 + 1;
    
    do{ 
        
        printf(" Enter your guessig number : \n");
        scanf("%d",&guess);
        
        if(guess>number){
            
            printf(" -----------------Your number is higher\n");
            
        } else if(guess<number){
            
            printf("-----------------Your number is lower\n");
            
        } else {
            
            printf(" You have guess the number in %d times",Gtimes);
            Gtimes++;
            
        }
        
        }while(Gtimes!=guess);
        
    
    
   return 0;    
}
    
    
