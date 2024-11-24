#include <stdio.h> 
// Pointer arithmetics reviews :
int main () 

{   
    // POINTER arithmetics logics 
    int a = 4344;
    int *ptr = &a;
    
    printf(" The value stored at a is %d \n",*ptr);
    printf(" The address of a is %u \n",ptr);// 6487556
    ptr++;// 6487560 here 4 bytes stored for single integer increament
    printf(" The address after increament of ptr++ is %d \n",ptr);// 6487560
    ptr--;// 6487556 here 4 bytes stored for single integer decreament
    ptr--;// 6487552 here 4 bytes stored for single integer decreament
    printf(" The address after decreament two times is %d \n",ptr);// 6487552
    ptr = ptr + 3;// 6487564 here for 3 integer it storeadd 12 bytes
    printf(" The value after plus 3 is %d \n",ptr);// 6487564
    ptr = ptr - 10;// 6487564 here for 10 integer it will storeminus 40 bytes
    printf(" The value after minus 10 is %d \n",ptr);// 6487524
    
    
    printf("\n");
    
    char b = '$';
    char *cptr = &b;
    
    printf(" The address stored at cptr is %d \n",cptr);// 6487555
    cptr++;//6487556 here for character variable it will store 1 byte for 1 character.
    printf(" The addresss after increament cptr++ is %d \n",cptr);//6487556
    cptr--;// 6487555 // here single bytes is stored for singele character
    cptr--;// 6487554 // here single bytes is stored for single character
    printf(" The address after decreament of cptr 2 times is %d \n",cptr);// 6487554
    cptr = cptr + 1;// 6487555 here for characater it will add in single bytes for single character
    printf(" The addrsss after plus 1 is %d \n",cptr);// 6487555 
    cptr = cptr - 5;// 6487555 //here for character it will add in single bytes fo single character
    printf(" The addresses after minus 5 is %d \n",cptr); // 6487549
    
    printf("\n");
    
    float c = 23.4534;
    float *fptr = &c;
    
    printf(" The value stored at fptr is %d \n",fptr);//6487548
    fptr++;// 6487552 for floating value 4 increament bytes for single floatvalue like integer
    printf(" The value stored at fptr is %d \n",fptr);// 6487552
    fptr--;// 6487548 for floating value 4 increament 4 bytes for single floatvalue like integer
    fptr--;// 6487544 here it will stored 4 bytes for single float value..
    printf(" The value stored at fptr is %d \n",fptr);// 6487544
    fptr = fptr + 2;//6487552 here it will store 4 bytes for single float value like ineger
    printf(" The value after plus 2 fptr is %d\n",fptr);// 6487552
    fptr = fptr - 9;// 6487520 here it will sotre 4 byhtes for single flaot value like integer
    printf(" The value after minus 9 is %d \n",fptr);// 6487516


	return 0;
}
