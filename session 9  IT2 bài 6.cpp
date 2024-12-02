#include <stdio.h>


int sumOdd(int arr[10][10], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] % 2 != 0) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}


int productBorder(int arr[10][10], int rows, int cols) {
    int product = 1;
    for (int i = 0; i < rows; i++) {
        product *= arr[i][0]; 
        product *= arr[i][cols - 1]; 
    }
    for (int j = 0; j < cols; j++) {
        product *= arr[0][j];
        product *= arr[rows - 1][j]; 
    }
    return product;
}

void printMainDiagonal(int arr[10][10], int rows, int cols) {
    printf("Duong cheo chinh: ");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
}

// Hàm in các ph?n t? trên ðý?ng chéo ph?
void printSecondaryDiagonal(int arr[10][10], int rows, int cols) {
    printf("Duong cheo phu: ");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", arr[i][cols - i - 1]);
    }
    printf("\n");
}

// Hàm in d?ng có t?ng giá tr? các ph?n t? là l?n nh?t
void printRowWithMaxSum(int arr[10][10], int rows, int cols) {
    int maxSum = -1, maxRow = -1;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }
    printf("D?ng có t?ng l?n nh?t là d?ng %d v?i t?ng = %d\n", maxRow + 1, maxSum);
}

int main() {
    int rows, cols, choice;
    int arr[10][10];
    do {
        // Menu chính
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap so dong: ");
                scanf("%d", &rows);
                printf("Nhap so cot: ");
                scanf("%d", &cols);
                printf("Nhap gia tri cho cac phan tu cua mang:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("Phan tu [%d][%d]: ", i + 1, j + 1);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;
            }
            case 2: {
                printf("Gia tri cac phan tu cua mang:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                printf("Cac phan tu le: ");
                int sum = sumOdd(arr, rows, cols);
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n", sum);
                break;
            }
            case 4: {
                int product = productBorder(arr, rows, cols);
                printf("Tich cac phan tu tren duong bien: %d\n", product);
                break;
            }
            case 5: {
                printMainDiagonal(arr, rows, cols);
                break;
            }
            case 6: {
                printSecondaryDiagonal(arr, rows, cols);
                break;
            }
            case 7: {
                printRowWithMaxSum(arr, rows, cols);
                break;
            }
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
                break;
        }

    } while (choice != 8);

    return 0;
}

