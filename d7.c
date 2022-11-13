#include <stdio.h>

int f(int n) {
    int r = 1;
    for(int i = 1; i<=n; i++) {
        r = r * i;
    }
    return r;
}

int main() {
    printf("%d\n", f(4));
    return 0;
}