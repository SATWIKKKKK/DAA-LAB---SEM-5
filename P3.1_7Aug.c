#include <stdio.h>

int main() {
    int n, i, j, temp, g;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter group size : ");
    scanf("%d", &g);

    for(i = 0; i < n; i += g) {
        int end = i + g;
        if(end > n)
            end = n;
        for(j = i; j < end - 1; j++) {
            for(int k = j + 1; k < end; k++) {
                if(a[j] > a[k]) {
                    temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }
    }

    printf("Output:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}