/*
 ตัวอย่างการใช้งาน printf()
*/

#include<stdio.h>

int main()
{
    printf("\n\nI'm studying c programming language.\n"); // พิมพ์ข้อความธรรมดา
    printf("\n\n");

    // print String
    printf("print String\n");
    printf("--------------------\n");
    printf("|%s|\n", "0123456789"); // print |0123456789|
    printf("|%s|\n", "HELLO");      // print |HELLO|
    printf("|%2s|\n", "HELLO");     // print |HELLO|
    printf("|%10s|\n", "HELLO");    // print |     HELLO|
    printf("|%-10s|\n", "HELLO");   // print |HELLO     |
    printf("|$%-10s|\n", "HELLO");  // print |$HELLO     |
    printf("|%10.3s|\n", "HELLO");  // print |       HEL|
    printf("|%-10.4s|\n", "HELLO"); // print |HELL      |
    printf("\n\n");

    // print decimal number
    printf("print decimal number\n");
    printf("--------------------\n");
    printf("|%s|\n", "0123456789"); // print |0123456789|
    printf("|%d|\n", 123);          // print |123|
    printf("|%2d|\n", 123);         // print |123|
    printf("|%10d|\n", 123);        // print |       123|
    printf("|%-10d|\n", 123);       // print |123       |
    printf("|%+-10d|\n", 123);      // print |+123      |
    printf("|%+10d|\n", 123);       // print |      +123|
    printf("|%+10d|\n", -123);      // print |      -123|
    printf("|%+-10d|\n", -123);     // print |-123      |
    printf("\n\n");

    // print real number
    printf("print real number\n");
    printf("--------------------\n");
    printf("|%s|\n", "0123456789"); // print |0123456789|
    printf("|%e|\n", 1234.56);      // print |1.234560e+03|
    printf("|%E|\n", 1234.56);      // print |1.234560E+03|
    printf("|%f|\n", 1234.56);      // print |1234.560000|
    printf("|%4.2f|\n", 1234.56);   // print |1234.56|
    printf("|%3.1f|\n", 1234.56);   // print |1234.6|
    printf("|%10.3f|\n", 1234.56);  // print |  1234.560|
    printf("\n\n");
    
    //print another case
    printf("print other case\n");
    printf("--------------------\n");
    printf("|%s|\n", "0123456789"); // print |0123456789|
    printf("|%c|\n", 'A');
    printf("|%d|\n", 'A');
    printf("|%o|\n", 'A');
    printf("|%x|\n", 'A');
    printf("|%X|\n", 'A');
    printf("|%c|\n", 65);
    printf("|%d|\n", 254);
    printf("|%o|\n", 254);
    printf("|%x|\n", 254);
    printf("|%X|\n", 254);
    printf("\n\n");

    // print string Constant
    printf("print string constant\n");
    printf("--------------------\n");
    printf("Ding\a Ding\a Ding\a\n"); 
    printf("HELLO \t%c\n %d\n\v %s", 'C', 100, "OK!"); 
    
    
    
    return 0;    
}
