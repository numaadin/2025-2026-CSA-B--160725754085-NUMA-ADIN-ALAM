#include <stdio.h>

void selectionSort(int a[], int n) {
    if (n <= 1)
        return;

    int i, min = 0, temp;

    // Find index of minimum element
    for (i = 1; i < n; i++) {
        if (a[i] < a[min])
            min = i;
    }

    // Swap first element with minimum
    temp = a[0];
    a[0] = a[min];
    a[min] = temp;

    // Recur for remaining array
    selectionSort(a + 1, n - 1);
}

int main() {
    int a[10], n, i;

    printf("Enter value of n:\n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    selectionSort(a, n);

    printf("Sorted elements:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
