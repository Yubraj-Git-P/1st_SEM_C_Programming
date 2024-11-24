#include <stdio.h>

int main()

{
    int i = 8;// Decalaring any one of the variable inside the memory space.
    
    int *j;// Decalaring pointer
    
    j = &i;// giving adress of the variable to the pointer
    
    printf(" Adress of the variable is %d\n",j);
    
    printf("Adress of the variabe is %d\n",*j);
    
    printf(" adress of the variable i is %u\n",&i);
    
    printf(" value at the adress of the variable is %d\n",*(&i));
    

    return 0;
}
