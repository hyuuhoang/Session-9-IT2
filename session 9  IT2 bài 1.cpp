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


    int value, position;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (tu 1 den %d): ", n + 1);
    scanf("%d", &position);


    if (position < 1 || position > n + 1) {
        printf("Vi tri khong hop le! Vui long nhap lai.\n");
        return 1;
    }


    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = value;
    n++;

    printf("Mang sau khi chen: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


