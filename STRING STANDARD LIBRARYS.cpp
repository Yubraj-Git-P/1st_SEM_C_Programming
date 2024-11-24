#include <stdio.h>
#include <string.h>// this header files must be used to input an funcitons

int main ()

{   
    // Here You have to use the strlen() to count the number of character inside the string::
    
    char name[] = "HELLOW EVERYONE MY NAME IS YUBRAJ PARIYAR";
    //strlen() is a fucniton which helps to count the number of character inside an string values
    char fathername[] = " MY FATHER NAME IS DAL BAHADUR DAMAI BHANNE MIN BAHADUR ROKA";
    //strlen() is a function which helps to count the number of character insdie an string values
    char mothername[] = " MY MOTHER NAME IS MINA BAHADURNI DAMAI";
    // strlen() is a function which helps to count the number of chacter inside an string values
    char brothername[] = "MY BROTHER NAME IS HIMAL PARIYAR";
    // strlen() is a funtion which helps to count the number of character inside an string values 
    char sistername[] = " MY SISTER NAME IS KARISHMA PARIYAR";
   // strlen() is a function which helps to count the number of character inside an string valeus
    printf(" The no of character inside an name is %d\n",strlen(name));
    // strlen() is a fucnition which helps to count the number of characetr inside an string values
    printf("The no of character inside an fathername is %d\n",strlen(fathername));
    // strlen() is a  funciton whihc helps to count the number of character inside an string values
    printf(" The no of character inside an mothername is %d\n",strlen(mothername));
    // strlen() is a functoin which helps to count the number of character inside an string valeus
    printf(" The no of character inside an brother name is %d\n",strlen(brothername));
    // strlen() is funtion which helps to count the number of character inside an string values
    printf(" The no of character inside an sister name is %d\n",strlen(sistername));
    // strlen() is a function which helps to count the number of character inside an string valeus
    printf("**************************************************************\n");
    printf("**************************************************************\n");
    printf("**************************************************************\n");
    
    
    char school[] = "Narayani model higher secondary school";
    // strcpy() is a function which helps to copy the content of one string to another
    char yubraj[50];
    
    // school name of yubraj sir ::
    
    strcpy(yubraj,school);
    // strcpy() is a funtion which helps to copy content of one another string to another
    printf(" %s",yubraj);
    // strcpy() is a functioni which helps to copy the content of one another string to another
    printf("\n");
    // strcpy() is a fcuntion which helps to copy the content of one string to another string
    char sahil[60];
    // strcpy() is a function which helps to copy the content of one string to another string
    strcpy(sahil,yubraj);
    // strcpy() is a function which helps to copy the content of one string to another string
    printf("%s",sahil);
    // strcpy is a funciton which helps to copy the content of one string to another string 
    printf("\n");
    // strcpuy() is a functio which helps to copy the content of one string to another string
    char yuvi[40];
    // strcpy() is a function which helps to copy the content of one string to another string
    strcpy(yuvi,sahil);
    // strcpy() is a function which helps to copy the content of one string to another string 
    printf("%s",sahil);
    // strspy() is a fucnito which helps to copy th content of one string to another string
    
	return 0;
}
