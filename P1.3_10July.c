#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    int duplicates = 0;
    int maxCount = 0;
    int mostRepeat;

    for(i = 0; i < n; i++) {
        if(visited[i])
            continue;

        int count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        if(count > 1)
            duplicates++;

        if(count > maxCount) {
            maxCount = count;
            mostRepeat = arr[i];
        }
    }

    printf("Total duplicate values = %d\n", duplicates);
    printf("Most repeating element = %d\n", mostRepeat);

    return 0;
}
