#include <stdio.h>

int g(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return n;
}

int f(int n) {
    if (n < 2) {
        return 1;
    }
    return g(n);
}

int main() {
    printf("%d\n", f(10));
    return 0;
}