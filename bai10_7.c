#include <stdio.h>

int main() {
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int left = 0, right = n - 1;
    int found = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            printf("%d", mid);
            found = 1;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (!found) {
        printf("Khong tim thay");
    }
    return 0;
}

