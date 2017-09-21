#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int first[10];
    int second[10];
    int i;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        first[i] = rand();
    }

    first[9] = 0;

    printf("%s\n", "The original array:");

    for (i = 0; i < 10; i++) {
        printf("first[%d]: %d\n", i, first[i]);
    }

    int* second_ptr = &second[0];

    printf("%s\n", "The second array:");

    for (i = 0; i < 10; i++) {
        *(second + i) = first[9 - i];
	printf("*(second + %d): %d\n", i, *(second + i));
    }

    return 0;
}
