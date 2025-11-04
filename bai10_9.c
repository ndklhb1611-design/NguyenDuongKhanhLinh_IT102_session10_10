#include <stdio.h>

int main() {
    int n,i,j;
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);
    int prices[n];
    printf("Nhap gia san pham: ");
    for ( i = 0; i < n; i++)
        scanf("%d", &prices[i]);
    int id;
    printf("Nhap ma san pham can tim: ");
    scanf("%d", &id);
    if (id >= 0 && id < n)
        printf("Gia cua san pham voi ma ID %d: %d\n", id, prices[id]);
    else
        printf("Khong co san pham voi ma ID %d\n", id);
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (prices[j] > prices[j + 1]) {
                int temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }
    printf("Danh sach gia san pham sau khi sap xep: ");
    for (i = 0; i < n; i++)
        printf("%d ", prices[i]);
    printf("\n");
    return 0;
}

