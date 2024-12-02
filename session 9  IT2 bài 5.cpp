#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int arr[100];
    int currentLength = 0;
    int choice, value, position;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Nhap so luong phan tu can nhap: ");
                scanf("%d", &currentLength);
                for (int i = 0; i < currentLength; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Gia tri cac phan tu dang quan ly: ");
                for (int i = 0; i < currentLength; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                {
                    int sumEven = 0;
                    printf("Gia tri cac phan tu chan: ");
                    for (int i = 0; i < currentLength; i++) {
                        if (arr[i] % 2 == 0) {
                            printf("%d ", arr[i]);
                            sumEven += arr[i];
                        }
                    }
                    printf("\nTong cac phan tu chan: %d\n", sumEven);
                }
                break;
            case 4:
                {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < currentLength; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Gia tri lon nhat: %d\n", max);
                    printf("Gia tri nho nhat: %d\n", min);
                }
                break;
            case 5:
                {
                    int sumPrimes = 0;
                    printf("Gia tri cac phan tu la so nguyen to: ");
                    for (int i = 0; i < currentLength; i++) {
                        if (isPrime(arr[i])) {
                            printf("%d ", arr[i]);
                            sumPrimes += arr[i];
                        }
                    }
                    printf("\nTong cac phan tu so nguyen to: %d\n", sumPrimes);
                }
                break;
            case 6:
                {
                    printf("Nhap mot so can thong ke: ");
                    scanf("%d", &value);
                    int count = 0;
                    for (int i = 0; i < currentLength; i++) {
                        if (arr[i] == value) count++;
                    }
                    printf("So %d xuat hien %d lan trong mang.\n", value, count);
                }
                break;
            case 7:
                {
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    printf("Nhap vi tri can them (0 den %d): ", currentLength);
                    scanf("%d", &position);
                    if (position < 0 || position > currentLength) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = currentLength; i > position; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[position] = value;
                        currentLength++;
                    }
                }
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 8);
    return 0;
}
