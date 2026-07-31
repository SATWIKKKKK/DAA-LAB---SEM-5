#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    for (int i = 0; i < 50000; i++) {
        int r = rand();
    }

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("CPU execution time for 50000 iterations  = %f seconds\n", cpu_time_used);

    return 0;
}
