/*
Int
*/
#include <stdio.h>

int main() {
    int c=87;
    unsigned int d = 4294967296;//range of int is 0-4294967295, if this exceeds it again traces back to 0
    printf("%d %u",c,d);
    return 0;
}
//output:87 0
