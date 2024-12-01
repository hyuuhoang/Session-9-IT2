#include <stdio.h>

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;


    printf("Nhap so phan tu muon nhap (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n < 1 || n > MAX_SIZE) {
        printf("So phan tu khong hop le! Vui long nhap lai.\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("Mang hien tai: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    int position;
    printf("Nhap vi tri can xoa (tu 1 den %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n) {
        printf("Vi tri khong hop le! Vui long nhap lai.\n");
        return 1;
    }

    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

