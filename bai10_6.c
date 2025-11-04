#include <stdio.h>

int main() {
    int n, i, j, temp;
    int swapped;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Thu?t toán Bubble Sort có d?ng s?m
    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Gán l?i b?ng 0 m?i vòng l?p

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán d?i
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Ðánh d?u có hoán d?i
            }
        }

        // N?u không có hoán d?i, m?ng dã s?p x?p => d?ng l?i
        if (swapped == 0)
            break;
    }

    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
