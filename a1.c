#include <stdio.h>

int f(int n) {
    return (10 - n) * 2;
}

int main() {
    int a = 16;
    int b = 3;
    b = a % b;
    printf("%d\n", f(b));
    return 0;
}