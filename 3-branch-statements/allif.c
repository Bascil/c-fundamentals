#include<stdio.h>
#include<stdlib.h>

/**
 * @brief 
 * With all ifs we will check each one
 * of these statements. We can fall into multiple
 * code blocks
 * @return int 
 */

int main(){
    int numItems = 5;

    if(numItems < 2) {
      printf("a");
    }
    
    if(numItems < 7) {
        printf("f");
    }

   // x = 5 is an assignment - has the value 5,
   // x == 5 is comparison/true or false - is a boolean check
   // a common mistake is to say if(x = 5), 
   // the code will still compile but do something different
    if(numItems == 5){
        printf("m");
    }

    printf("z");
    printf("\n");

    return EXIT_SUCCESS;
}