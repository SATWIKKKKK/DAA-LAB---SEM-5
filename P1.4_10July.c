#include <stdio.h>

void exchange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rotateRight(int arr[], int p) {
    int i;
    for(i = p - 1; i > 0; i--)
        exchange(&arr[i], &arr[i - 1]);
}

int main() {
    int n, p, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter p: ");
    scanf("%d", &p);

    printf("Before Rotate:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    rotateRight(arr, p);

    printf("\nAfter Rotate:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
