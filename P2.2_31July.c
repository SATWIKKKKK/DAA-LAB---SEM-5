#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("Number of command line arguments = %d\n", argc);

    for (int j = 1; j < argc; j++) {
        int num = atoi(argv[j]);  // convert string to integer
        num = num + 1;            // increase the value by 1
        printf("argv[%d] = %s -> %d\n", j, argv[j], num);
    }

    return 0;
}
