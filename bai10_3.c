#include <stdio.h>

int main() {
    int n,i;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int x;
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Chi so cua phan tu can tim: %d\n", i);
            break;
        }
    }
    if (i == n)
        printf("Khong tim thay\n");

    return 0;
}

