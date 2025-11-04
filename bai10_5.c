#include <stdio.h>

int main() {
    int n,i;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int value;
    printf("Nhap gia tri can dem: ");
    scanf("%d", &value);
    int count = 0; 
    for ( i = 0; i < n; i++) {
        if (arr[i] == value)
            count++;
    }
    printf("%d\n", count);
   return 0;
}


