#include <stdio.h>

int main() {
    short int a;
    a=32769;
    printf("%hd",a);

    return 0;
}
//output is: -32767

#include <stdio.h>

int main() {
    long int a = 1234567890L;  // Using 'L' suffix to specify a long integer literal
    long long int b = 123456789012345LL;  // Using 'LL' suffix to specify a long long integer literal

    printf("Value of a (long int): %ld\n", a);
    printf("Value of b (long long int): %lld\n", b);

    return 0;
}
/*
Value of a (long int): 1234567890
Value of b (long long int): 123456789012345
*/
    
