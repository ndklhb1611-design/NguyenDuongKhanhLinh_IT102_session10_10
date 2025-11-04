#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int x;
    scanf("%d", &x);
    for ( i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d duoc tim thay tai vi tri %d", x, i);
        }
    }
    printf("Khong tim thay");

    return 0;
}


