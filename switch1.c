/*
  swtich demo 1
  enter integer number and print out
*/
#include<stdio.h>

int main(){

    int num;

    printf("\nEnter Number:");
    scanf("%d", &num);

    switch(num){
        case 1:
                printf("x = 1\n");
                break;
        case 2:
                printf("x = 2\n");
                break;
        case 3:
                printf("x = 3\n");
                break;
        case 4:
                printf("x = 4\n");
                break;
        case 5:
                printf("x = 5\n");
                break;
        default:
                printf("x = %d\n", num);

    }

    return 0;
}
