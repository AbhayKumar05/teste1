#include <stdio.h>

int main() {
    int n = 10;
    for(int i = n; i > 0; i-=2) {
        printf("%d ", i);
    }
    return 0;
}