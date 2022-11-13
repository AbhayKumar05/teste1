#include <stdio.h>

int main() {
    int t = 2;
    int n = 4;
    for(int i = 0; i < n; i++) {
        printf("%d ", i % t);
    }
    return 0;
}