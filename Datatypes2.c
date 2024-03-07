#include <stdio.h>
#include <limits.h> 

int main() {
    
    char char_var;
    unsigned char uchar_var;
    short short_var;
    unsigned short ushort_var;
    int int_var;
    unsigned int uint_var;
    long long_var;
    unsigned long ulong_var;
    long long long_long_var;
    unsigned long long ulong_long_var;

    printf("Size of char: %ld bytes\n", sizeof(char_var));
    printf("Size of unsigned char: %ld bytes\n", sizeof(uchar_var));
    printf("Size of short: %ld bytes\n", sizeof(short_var));
    printf("Size of unsigned short: %ld bytes\n", sizeof(ushort_var));
    printf("Size of int: %ld bytes\n", sizeof(int_var));
    printf("Size of unsigned int: %ld bytes\n", sizeof(uint_var));
    printf("Size of long: %ld bytes\n", sizeof(long_var));
    printf("Size of unsigned long: %ld bytes\n", sizeof(ulong_var));
    printf("Size of long long: %ld bytes\n", sizeof(long_long_var));
    printf("Size of unsigned long long: %ld bytes\n", sizeof(ulong_long_var));

    printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of unsigned char: 0 to %d\n", UCHAR_MAX);
    printf("Range of short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short: 0 to %d\n", USHRT_MAX);
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int: 0 to %u\n", UINT_MAX);
    printf("Range of long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long: 0 to %lu\n", ULONG_MAX);
    printf("Range of long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Range of unsigned long long: 0 to %llu\n", ULLONG_MAX);

    return 0;
}
