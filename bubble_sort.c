#include <stdio.h>  // Bubble Sort

int main() {
    int n, i, j, temp;

    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (b[j] > b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
