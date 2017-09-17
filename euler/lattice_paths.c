#include <stdio.h>

long nr_lattice_paths(int grid_width, int grid_height) {
    if (grid_width == 1) {
        return grid_height + 1;
    }
    if (grid_height == 1) {
        return grid_width + 1;
    }

    long result = 1; // Accounts for w = 0

    int w;
    for (w = 1; w <= grid_width; w++) {
        result += nr_lattice_paths(w, grid_height - 1);
    }

    return result;
}

int main() {
    printf("%ld\n", nr_lattice_paths(20, 20));

    return 0;
}