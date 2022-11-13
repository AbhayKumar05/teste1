#include <stdio.h>

int f(int n) {
    return n - (n % 2);
}

int main() {
    int n = 10;
    int r = 1;
    if (f(n) > 0) {
        r = n - r;
    } else {
        r = r - n;
    }
    printf("%d\n", r);
    return 0;
}