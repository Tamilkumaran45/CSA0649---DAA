#include <stdio.h>
void selectionSort(int arr[], int n) {
    for (int i = 0, minIdx; i < n-1; i++, minIdx = i)
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[minIdx])
                minIdx = j, arr[i] ^= arr[minIdx] ^= arr[i] ^= arr[minIdx];
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; scanf("%d", &arr[i++]));
    selectionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; printf("%d ", arr[i++]));
    printf("\n");
    return 0;
}
