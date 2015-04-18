/*
หา size of ของแต่ละ data type and Min, Max of ของแต่ละ data type
ref : 
http://stackoverflow.com/questions/2053843/min-and-max-value-of-data-type-in-c
ต้องinclude limits.h, float.h
*/
#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){

    /* MIN, MAX Constant

    limits.h
    --------
    SCHAR_MIN  = minimum value for a signed char
    SCHAR_MAX  = maximum value for a signed char
    UCHAR_MAX  = maximum value for an unsigned char
    CHAR_MIN   = minimum value for a char
    CHAR_MAX   = maximum value for a char
    SHRT_MIN   = minimum value for a short
    SHRT_MAX   = maximum value for a short
    USHRT_MAX  = maximum value for an unsigned short
    INT_MIN    = minimum value for an int
    INT_MAX    = maximum value for an int
    UINT_MAX   = maximum value for an unsigned int
    LONG_MIN   = minimum value for a long
    LONG_MAX   = maximum value for a long
    ULONG_MAX  = maximum value for an unsigned long
    LLONG_MIN  = minimum value for a long long
    LLONG_MAX  = maximum value for a long long
    ULLONG_MAX = maximum value for an unsigned long long

    float.h
    -------
    FLT_MIN  = min value of a float
    FLT_MAX  = max value of a float
    DBL_MIN  = min value of a double
    DBL_MAX  = max value of a double
    LDBL_MIN = min value of a long double
    LDBL_MAX = max value of a long double

    */

    printf("DATA TYPE in C Lang.\n====================\n\n");

    printf("signed char : \n");
    printf("\tSize of : %ld bytes", sizeof(signed char));
    printf("\n\tMIN to MAX : %d to %d", SCHAR_MIN, SCHAR_MAX);
    printf("\n\n");

    printf("unsigned char : \n");
    printf("\tSize of : %ld bytes", sizeof(unsigned char));
    printf("\n\tMIN to MAX : %d to %u", 0, UCHAR_MAX);
    printf("\n\n");

    printf("char : \n");
    printf("\tSize of : %ld bytes", sizeof(char));
    printf("\n\tMIN to MAX : %d to %d", CHAR_MIN, CHAR_MAX);
    printf("\n\n");

    printf("short : \n");
    printf("\tSize of : %ld bytes", sizeof(short));
    printf("\n\tMIN to MAX : %d to %d", SHRT_MIN, SHRT_MAX);
    printf("\n\n");
    
    printf("unsigned short : \n");
    printf("\tSize of : %ld bytes", sizeof(unsigned short));
    printf("\n\tMIN to MAX : %d to %u", 0, USHRT_MAX);
    printf("\n\n");
    
    printf("int : \n");
    printf("\tSize of : %ld bytes", sizeof(int));
    printf("\n\tMIN to MAX : %d to %d", INT_MIN, INT_MAX);
    printf("\n\n");
    
    printf("unsigned int : \n");
    printf("\tSize of : %ld bytes", sizeof(unsigned int));
    printf("\n\tMIN to MAX : %d to %u", 0, UINT_MAX);
    printf("\n\n");
    
    printf("long : \n");
    printf("\tSize of : %ld bytes", sizeof(long));
    printf("\n\tMIN to MAX : %ld to %ld", LONG_MIN, LONG_MAX);
    printf("\n\n");
    
    printf("unsigned long : \n");
    printf("\tSize of : %ld bytes", sizeof(unsigned long));
    printf("\n\tMIN to MAX : %d to %lu", 0, ULONG_MAX);
    printf("\n\n");
    
    printf("long long : \n");
    printf("\tSize of : %ld bytes", sizeof(long long));
    printf("\n\tMIN to MAX : %lld to %lld", LLONG_MIN, LLONG_MAX);
    printf("\n\n");
    
    printf("unsigned long long : \n");
    printf("\tSize of : %ld bytes", sizeof(unsigned long long));
    printf("\n\tMIN to MAX : %d to %llu", 0, ULLONG_MAX);
    printf("\n\n");
    
    printf("float : \n");
    printf("\tSize of : %ld bytes", sizeof(float));
    printf("\n\tMIN to MAX : %.1e to %.1e", FLT_MIN, FLT_MAX);
    printf("\n\n");
    
    printf("double : \n");
    printf("\tSize of : %ld bytes", sizeof(double));
    printf("\n\tMIN to MAX : %.1e to %.1e", DBL_MIN, DBL_MAX);
    printf("\n\n");
    
    printf("long double : \n");
    printf("\tSize of : %ld bytes", sizeof(long double));
    printf("\n\tMIN to MAX : %.1Le to %.1Le", LDBL_MIN, LDBL_MAX);
    printf("\n\n");
    






    return 0;
}
