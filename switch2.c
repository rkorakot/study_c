/* switch demo 2
   check odd or even number
*/
#include <stdio.h>

int main(){

    int num, mod;

    printf("Enter number: ");
    scanf("%d", &num);

    mod = num % 2;

    switch(mod) {

        case 0:
            printf("%d is even number. \n", num);
            break;
        default:
            printf("%d is odd number. \n", num);


    }


    return 0;
}
