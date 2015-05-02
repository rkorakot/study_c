/*
 จะทำคำสั่งภายใน if ก็ต่อเมื่อ เงือนไขในวงเล็บเป็นจริงเท่านั้น
   - เงือนไขเป็น เท็จ(false) เมื่อ = 0
   - เงื่อนไขเป็น จริง(ture) เมื่อ < 0 , > 0 (เป็นค่า บวก หรือ ค่า ติดลบก็ได้)
*/
#include <stdio.h>

int main(){

    int con_1 = -1;
    int con0 = 0;
    int con1 = 1;
    int con2 = 2;

    if (con_1) {
        puts("con_1\n");
    }

    if (con0) {
        puts("con0\n");
    }

    if (con1) {
        puts("con1\n");
    }

    if (con2) {
        puts("con2\n");
    }

    return 0;
}
