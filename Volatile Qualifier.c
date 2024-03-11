#include <stdio.h>

int main() {
  int a=10;
  volatile int b=20;
printf("%d %d %d",a++,a++,a++);
printf("\n%d %d %d",++b,++b,++b);
    return 0;
}
