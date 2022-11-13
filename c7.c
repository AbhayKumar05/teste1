#include <stdio.h>

int f(int n) {
    int r = 1, i = 1;
    while(i <= n) {
        r = r * i;
        i++;
    }
    return r;
}

int main() {
    printf("%d\n", f(3));
    return 0;
}