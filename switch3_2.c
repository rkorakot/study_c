/* switch demo3
    convert dec --> hex
    convert hex --> doc
    convert dec --> oct
    convert oct --> dec
    
    input choice by getchar()
*/
#include <stdio.h>

int main() {

    int num;
    char choice;

    puts("1. Convert Dec --> Hex");
    puts("2. Convert Hex --> Dec");
    puts("3. Convert Dec --> Oct");
    puts("4. Convert Oct --> Dec");
    printf("Select you choice: ");

    choice = getchar();

    switch(choice){

        case '1':
            printf("Enter Number: ");
            scanf("%d", &num);
            printf("%d in hex is %x.\n", num, num);
            break;
        case '2':
            printf("Enter Number: ");
            scanf("%x", &num);
            printf("%x in dec is %d.\n", num, num);
            break;
        case '3':
            printf("Enter Number: ");
            scanf("%d", &num);
            printf("%d in oct is %o.\n", num, num);
            break;
        case '4':
            printf("Enter Number: ");
            scanf("%o", &num);
            printf("%o in dex is %d.\n", num, num);
            break;
        default: 
            puts("Good Bye.\n\n");
    }

    return 0;

 }
