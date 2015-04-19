/*
 - ทดสอบประกาศชื่อตัวแปรในรูปแบบต่างๆ ดูว่า compile ผ่านหรือไม่
 - ทดสอบกำหนดค่าให้กับตัวแปรในรูปแบบต่างๆ
*/
#include<stdio.h>

int main()
{
    int Chr=97;
    int A=100;
    char chr='A';
    int _integer=1000;

    int this_is_number;
    this_is_number = 2000;

    int no_body_ = 300;
    int dolla$ = 123;
    int dolla$x = 222;
    int $dolla = 333;
    int int1 = 1111;

    int x,y,z;
    x = y = z = 99;

    int a, b, c;

    printf("%c \n", Chr);
    printf("%d \n", Chr);
    printf("%c \n", A);
    printf("%d \n", A);
    printf("%c \n", chr);
    printf("%d \n", chr);
    printf("%d \n", _integer);
    printf("%d \n", this_is_number);
    printf("%d \n", no_body_);
    printf("%d \n", dolla$);
    printf("%d \n", dolla$x);
    printf("%d \n", $dolla);
    printf("%d \n", int1);
    printf("%d %d %d \n", x, y, z);

    a = b = c = z;
    printf("%d %d %d \n", a, b, c);

    return 0;
}
