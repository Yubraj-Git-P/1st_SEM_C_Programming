#include <stdio.h>

/*
*). Dynamically Memory Allocation :
->

1).An Statically allocated variable or array which has a fixed size in memory.
2). Dynamic Memory allocation is a way in which the size of a data structure can be changed during the runtime.
3).Memory assigned to a program can be typical architecture can be broken down into four segments.
a). Code.
b). Static/global variables.
c). Stack.
4). Heap.


*). In Dynamic memory allocation, the memory is allocated at runtime form the heap segment :
1). We have four functions that helps us to achieve the stack :
a). malloc()
b). calloc()
c). realloc()
d). free()



A). Malloc() :
-> malloc() stands for memory allocation
-> it reserves a block of memory with the given amount of bytes
-> The return values is a void pointer to the allocated space
-> Therefore the void pointer needs to be casrted to the appropriate types as pe the requirement
-> However, if the space is insufficent, allocation of memory fails and it returns a NULL pointer.
-> All the values at allocated memory are intialized to garbage values.

*). Syntax:

   ptr = (ptr-type*) malloc(size_in_bytes)
   
*/

int main()
{



    return 0;
}