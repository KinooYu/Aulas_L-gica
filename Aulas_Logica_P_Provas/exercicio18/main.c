#include <stdio.h>

int main() {
    int a, b, c;
    a = 10;
    b = 20;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    c = a;
    a = b;
    b = c;

    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}
