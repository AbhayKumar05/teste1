#include <stdio.h>

int main() {
    int n = 10;
    int r = 1;
    int m = n / r;
    if (n > m) {
        r = n - r;
    } else {
        r = r - n;
    }
    printf("%d\n", r);
    return 0;
}