#include <stdio.h>

void times_table(int n);

int main() {
    int limit = 10;
    times_table(limit);

    return 0;
}

void times_table(int n) {
    for (int i = 0; i <= n; i++) {
        int result = 9 * i;
        printf("9 x %d = %d\n", i, result);
    }
}

