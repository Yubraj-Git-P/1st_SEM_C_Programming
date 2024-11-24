#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Number guessing game between 1 and 100.
int main (){
    
    int number,guess;
    int Gtimes = 1;
    
    srand(time(0));
    number = rand() % 100 + 1;
    
    do{
       printf("Enter guessed NO. between 1 and 100 \n");
       scanf("%d",&guess);
       
       if(guess>number){
           
          printf("-----------------------------------------You no is Higher\n");
          
       } else if(guess<number) {
           
           printf("---------------------------------------- Your number is lower\n");
           
       } else{
           
           printf("You guess the number in %d times\n",Gtimes);
           
       }
        Gtimes++;
        
    
    }while(guess!=number);
    
    

    return 0;
}
