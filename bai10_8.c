#include <stdio.h>

int main() {
    int n,i,j;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int x;
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    int left = 0, right = n - 1;
    int index = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            index = mid;
            break;
        } else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (index != -1)
        printf("Chi so cua phan tu can tim: %d\n", index);
    else
        printf("Khong tim thay\n");
    return 0;
}

