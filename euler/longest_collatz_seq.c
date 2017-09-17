#include <stdio.h>

int collatz_len(int start_nr) {
    int result = 0;
    long cur = start_nr;

    for (; cur != 1; result++) {
        if (cur % 2 == 0) {
            cur /= 2;
        } else {
            cur = 3 * cur + 1;
        }
    }

    return result;
}

int main() {
    int result = 0;
    int max_len = 0;

    int i;
    for (i = 1; i < 1000000; i++) {
        int new_len = collatz_len(i);
        if (new_len > max_len) {
            max_len = new_len;
            result = i;
        }
    }

    printf("%d\n", result);
    
    return 0;
}
