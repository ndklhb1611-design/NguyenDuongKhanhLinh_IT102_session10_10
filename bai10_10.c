#include <stdio.h>

int main() {
    int n,i,j;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu: ");
    for ( i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int min = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    printf("So nho nhat: %d\n", min);
    for (i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    int key;
    printf("Nhap so can tim: ");
    scanf("%d", &key);
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            printf("So %d duoc tim thay tai vi tri: %d\n", key, mid);
            break;
        } else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;

        if (left > right)
            printf("Khong tim thay %d\n", key);
    }
    return 0;
}
