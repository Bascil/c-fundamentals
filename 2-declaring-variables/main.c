/*
 Programming Terms

 Syntax 
 - Language rules, a program must follow to be understood by compiler
 - Analogous/similar to grammar in english
 - Every language follows gramatical rules
 - computer language rules are often very precise

 Variable
 - Named storage location in a computer memory

*/ 

#include<stdio.h>
#include<stdlib.h>

int main(){
    /**
      Declaration requires a data type followed by a name
      e.g  int i, float amount, char name
    */

    // declaration
    //int i; // declaring an integer data type, declared but not initialized
    // i = 5; // that variable i has a value 5

    // We can do this in one line - declaration and initialization
    // the two lines above are equivalent to the one line below
    // its good practice to declare and initialize the value
    int i = 5;

    printf("Variable i equals %d\n", i); 

    // format specifier -  specifies how we want to print the value

    // to print out an integer as a decimal - base 10 use %d
    // the %d is a format specifier
    // the i after the comma indicates which integer to print


    int j = 10;
    j = i + j;

    printf("Variable j equals %d\n", j); 

    return EXIT_SUCCESS;
}
