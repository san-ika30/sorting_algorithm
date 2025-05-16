#include <stdio.h>  // Insertion Sort

int main() {
    int i, j, n, key;

    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Insertion Sort
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        // Move elements of a[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;

        // Print the array after each pass
        printf("Pass %d: ", i);
        for (int k = 0; k < n; k++) {
            printf("%d\t", a[k]);
        }
        printf("\n");
    }

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
