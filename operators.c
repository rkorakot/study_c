/*
 ตัวอย่างการใช้ operators ทั้ง 3 แบบ
*/
#include <stdio.h>

int main()
{
    printf("Expression and Operators\n");
    printf("========================\n");
    
    // Basic Operators
    printf("\nBasic Operators\n");
    printf("\t100+31 = %d \n", 100+31);
    printf("\t3+3-6*7+100 = %d \n", 3+3-6*7+100);
    printf("\t3+3-6*(7+100) = %d \n", 3+3-6*(7+100));
    printf("\t3+(3-6)*(7+100) = %d \n", 3+(3-6)*(7+100));
    printf("\t(3+(3-6))*(7+100) = %d \n", (3+(3-6))*(7+100));
    // - - - - - - - - - - - - - - - - - - - -

    // Increment and Decrement
    int incre, decre;

    incre = 0;
    printf("\nIncrement, Decreament\n"); 
    printf("\tincrement++ , ++increment(increment = increment + 1\n");
    printf("\tincrement-- , --increment (increment = increment - 1\n");

    int x, y, sum;
    char *type;
    type = "\tx = %d  y = %d  sum = %d \n";
    x = y = 10;

    printf("\tx = y = 10 \n");

    sum = x + y;
    printf("\tsum = x + y \n");
    printf(type, x, y, sum);

    sum = x++ + y;
    printf("\tsum = x++ + y \n");
    printf(type, x, y, sum);
    
    sum = ++x + y;
    printf("\tsum = ++x + y \n");
    printf(type, x, y, sum);

    sum = --x + y;
    printf("\tsum = --x + y \n");
    printf(type, x, y, sum);

    sum = x-- + y;
    printf("\tsum = x-- + y \n");
    printf(type, x, y, sum);

    sum = x + y;
    printf("\tsum = x + y \n");
    printf(type, x, y, sum);

    printf("\t---\n");

    printf("\tdifferent of ++x vs x++\n");
    y = 0; x = 10;
    printf("\t++x : add befor use\n");
    printf("\tNow x = %d, y = %d \n", x , y);
    y = ++x;
    printf("\ty = ++x --> y = %d \n", y);
    y = ++x;
    printf("\ty = ++x --> y = %d \n", y);

    y = 0; x = 10;
    printf("\tx++ : add after use\n");
    printf("\tNow x = %d, y = %d \n", x , y);
    y = x++;
    printf("\ty = x++ --> y = %d \n", y);
    y = x++;
    printf("\ty = x++ --> y = %d \n", y);

    printf("\t---\n");

    x = 10;
    printf("\tNow x = %d \n", x);
    x += 5;
    printf("\tx += 5 (x = x + 5) now x = %d \n", x);
    x -= 10;
    printf("\tx -= 10 (x = x - 10) now x = %d \n", x);
    x /= 5;
    printf("\tx /= 5 (x = x / 5) now x = %d \n", x);
    x *= 22;
    printf("\tx *= 22 (x = x * 22) now x = %d \n", x);
    x %= 10;
    printf("\tx %%= 10 (x = x %% 10) now x = %d \n", x);

    // - - - - - - - - - - - - - - - - - - - -

    printf("\nNEXT >> Press Enter");

    getchar();

    // Relational and Logical Operators
    printf("\nRelational and Logical Operators\n");
    printf("1 = TRUE, 0 = FALSE\n");
    printf("\t(100 < 200) is %d\n", (100 < 200));
    printf("\t(100 > 200) is %d\n", (100 > 200));
    printf("\t(200 >= 200) is %d\n", (200 >= 200));
    printf("\t(100 <= 200) is %d\n", (100 <= 200));
    printf("\t((200 >= 200) && 10) is %d\n", ((200 >= 200) && 10));
    printf("\t!((200 >= 200) && 10) is %d\n", !((200 >= 200) && 10));

    printf("1 && 1 is 1 , other 0\n");
    printf("0 || 0 is 0 , other 1\n");
    printf("!1 = 0, !0 = 1\n\n");

    printf("\t1 && 1 is %d\n", 1 && 1);
    printf("\t1 && 0 is %d\n", 1 && 0);
    printf("\t0 && 1 is %d\n", 0 && 1);
    printf("\t0 && 0 is %d\n", 0 && 0);
    printf("\t1 || 1 is %d\n", 1 || 1);
    printf("\t1 || 0 is %d\n", 1 || 0);
    printf("\t0 || 1 is %d\n", 0 || 1);
    printf("\t0 || 0 is %d\n", 0 || 0);
    printf("\t!1 is %d\n", !1);
    printf("\t!0 is %d\n", !0);
    // - - - - - - - - - - - - - - - - - - - -

    return 0;
}
