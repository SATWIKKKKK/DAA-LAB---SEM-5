#include <stdio.h>

int main() {
    FILE *fp;
    int arr[100], n;

    printf("Enter how many numbers you want to read from file: ");
    scanf("%d", &n);

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

  
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }

    fclose(fp);

    printf("\nThe content of the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int duplicateCount = 0;
    int maxFreq = 0;
    int mostRepeating;

    
    for (int i = 0; i < n; i++) {
        int count = 1;

        
        int visited = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                visited = 1;
                break;
            }
        }

        if (visited)
            continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > 1)
            duplicateCount++;

        if (count > maxFreq) {
            maxFreq = count;
            mostRepeating = arr[i];
        }
    }

    printf("\nTotal number of duplicate values = %d", duplicateCount);
    printf("\nThe most repeating element in the array = %d\n", mostRepeating);

    return 0;
}


