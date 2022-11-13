#include <stdio.h>

int f(int n) {
    if(n < 2) {
        return 1;
    }
    else {
        return f(n-1) * f(n-2);
    }
}

int main() {
    // printf("%d\n", f(83)); // original
    printf("%d\n", f(5));
    return 0;
}