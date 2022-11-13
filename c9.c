#include <stdio.h>

int f(int n) {
    if (n < 2) {
        return 1;
    }
    return (n % 2) * f(n - 1);
}

int main() {
    printf("%d\n", f(10));
    return 0;
}