#include <stdio.h>

long binomial(int n, int k) {
    if (k == 0) {
        return 1;
    }

    // Binomial identity
    // TODO: Make more resilient to overflow
    return n * binomial(n - 1, k - 1) / k;
}

int main() {
    int grid_size = 20;
    printf(
        "Number of lattice paths thru %d x %d grid: %ld\n",
        grid_size,
        grid_size,
        binomial(grid_size * 2, grid_size));

    return 0;
}