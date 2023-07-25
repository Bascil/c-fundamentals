#include<stdio.h>
#include<stdlib.h>

int main(){
    int numTickets = 6;

    if(numTickets < 5) {
      printf("a");
    } else if(numTickets < 10) {
        printf("d");
    } else {
        printf("h");
    }

    printf("r");
    printf("\n");

    return 0;
}