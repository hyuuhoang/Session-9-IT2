#include <stdio.h>

int main() {
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; // Khai báo và gán giá tr? cho m?ng
    int position, newValue;

    printf("Mang ban dau: ");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can sua (tu 1 den %d): ", MAX_SIZE);
    scanf("%d", &position);


    if (position < 1 || position > MAX_SIZE) {
        printf("Vi tri khong hop le! Vui long nhap lai.\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    arr[position - 1] = newValue;

    printf("Mang sau khi sua: ");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

