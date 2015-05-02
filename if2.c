/*
  IF...ELSE
*/
#include <stdio.h>

int main(){

    int num;

    printf("\nEnter Number :");
    scanf("%d", &num);

    if ( num == 0 ) {
        puts("You enter zero number.\n\n");
    }
    else {
        puts("You enter not zero number.\n\n");
    }



    return 0;
}
