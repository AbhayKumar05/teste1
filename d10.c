#include <stdio.h>

int g(int n) {
    if (n % 2 != 0) {
        return -n;
    }
    return 1;
}

int f(int n) {
    if (n > 2) {
        return g(n);
    }
    return -1;
}

int main() {
    printf("%d\n", f(6));
    return 0;
}