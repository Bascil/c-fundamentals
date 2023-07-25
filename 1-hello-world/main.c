/*
 Libraries allow you to reuse code written by others
 We need to indicate which libraries we wish to use
 Libraries need to be added at the top as header files
 If you take the libraries out, you get compilation errors

 common ones
 - stdio - standard input/output library - must be used
 - stdlib - standard library
*/ 

#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Hello world\n"); // \n is an escape character - newline

    // \n is used to add linebreaks - make a new line
    printf("Welcome Everyone");
    printf("To coding class");

    // comments can be single line // or multiline /* comments here */
    // compiler ignores them, not part of logic
    // ensures your code is readable and organized

    return EXIT_SUCCESS;
}
