/*
  ลองเล่นฟังก์ชันเกี่ยวกับรับค่าข้อมูล scanf() , getcha()
*/
#include <stdio.h>

int main()
{

    printf("Play around input function\n");
    printf("==========================\n\n");

    printf("scanf(\"Format String\", Argument..)\n\n");


    /* CASE 1 : Input Interger */
    int input1;
    printf("1. Enter Interger : ");
    scanf("%d", &input1);
    printf("   You enter %d \n\n", input1);


    /* CASE 2 : Input Float print with %f */
    float input2;
    printf("2. Enter Float(%%f) : ");
    scanf("%f", &input2);
    printf("   You enter %f \n\n", input2);


    /* CASE 3 : Input Float print with %e */
    float input3;
    printf("3. Enter Float(%%e) : ");
    scanf("%e", &input3);
    printf("   You enter %e \n\n", input3);
    

    /* CASE 4 : input 1 character with scanf()
     | ถ้าจะอ่าน char ด้วย scanf() ต้องเป็น "\n%c" หรือ " %c"
    */
    char input4;
    printf("4. Enter Char : ");
    scanf("\n%c", &input4); 
    printf("   Your enter %c \n\n", input4);
    

    /* CASE 5 : Input String
     | ถ้าเป็นตัวแปร string ไม่ต้องมี & หน้าชื่อตัวแปร
     | ตรง %s ควรกำหนดจำนวข้อมูลที่สามารถรับได้ไว้ให้ตรงกับตัวแปรที่ประกาศไว้ 
     | ตัวอย่างนี้ถ้าเจอ input ที่มี เว้นวรรค จะรับค่าแค่ตัวก่อนเว้นวรรคเท่านั้น เช่น 
     | input > Korakot Rakhuang จะรับแค่ Korakot แทนที่จะเป็น Korakot Ra
    */
    char str1[10];
    printf("5. Enter String(max 10 char) : ");
    scanf("%10s", str1);
    printf("   Your enter %s \n\n", str1);
    getchar();

    /* CASE 6 : Input โดยกำหนด format string
     | ถ้าต้องการรับข้อมูลทีละหลายๆตัวแปรในครั้งเดียวก็สามารถทำได้
     | แต่ต้องกำหนด format string ให้ถูกต้อง
     | เวลาใส่ข้อมูลก็ต้องตาม format string
    */
    char fname[20], sname[20];
    printf("6. Enter Your Full Name : ");
    scanf("%20s %20s", fname, sname);
    printf("   Your name is %s %s \n\n", fname, sname);
    getchar();


    /* CASE 7 : Input แบบกำหนดให้ไม่สนใจ character ตาม format string
     | ใช้ %*c ในการ ignore charactor '-' ไปได้
    */
    int num1, num2, num3;
    printf("7. Enter Your 3 numbers (ex: 100-250-900) : ");
    //scanf("%d-%d-%d", &num1, &num2, &num3);
    //scanf("%d,%d,%d", &num1, &num2, &num3);
    scanf("%d%*c%d%*c%d", &num1, &num2, &num3);
    printf("   Your 3 Numbers: %d %d %d \n\n", num1, num2, num3);
    getchar();


    /* CASE 8 : Scanset
     | สามารถทำการกรองตัวอักษรที่ต้องการได้ด้วยการทำ scanset
     | ถ้าเจอตัวใดไม่อยู่ในเงือนไข จะตัดตั้งแต่ตัวนั้นไปเลย เช่น
     | %[ABC] input BADC เข้าไป จะโดนตัดเหลือแค่ BA
    */
    char str2[20];
    printf("8. Enter Some Word : ");
    //scanf("%[ABCD]", str2); // รับเฉพาะตัวษร A B C D เท่านั้น (เฉพาะตัวเพิมพ์ใหญ่)
    //scanf("%[A-Z]", str2);  // รับเฉพาะตัวอักษร A ถึง Z เท่านั้น (เฉพาะตัวพิมพใหญ่)
    //scanf("%[a-z]", str2);  // รับเฉพาะตัวอักษร a ถึง z เท่านั้น (เฉพาะตัวพิมพ์เล็ก)
    //scanf("%[A-Za-z ]", str2);  // รับเฉพาะตัวอักษร และ space
    scanf("%[^\n]", str2);  // รับทุกตัวอักษรจนกระทังกด Enter
    //scanf("%[0-9]", str2);    // รับเฉพาะตัวเลข 0 ถึง 9 เท่านั้น) 
    printf("Some character has been moved : %s \n\n", str2);
    getchar();

    
    /* CASE 9 : getchar();
     | getchar() จะรับข้อมูลแค่ character ตัวเดียวเท่านั้นไม่ว่าจะพิมพ์มาก๊่ตัวก็ตาม
    */
    char ch;
    printf("9. Enter Some Key : ");
    ch = getchar();
    printf(" Your typed key %c \n\n", ch);
    //getchar();
    
    return 0;
}
