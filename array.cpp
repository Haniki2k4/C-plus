#include <stdio.h>

// Hàm thủ tục nhập số phần tử của mảng
void nhap(int *n){
	scanf("%d", n);
}

void nhap_n(int *n) {
	do {printf("Nhap so phan tu cua mang: ");
    nhap(n);
	}while (*n < 0 || *n > 100); // Lặp lại nếu n không nằm trong khoảng từ 0 đến 100
}

// Hàm nhập mảng 1 chiều có n phần tử
void nhap_mang(int a[], int n) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

// Hàm tính tổng tất cả các phần tử trong mảng
int tong_mang(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}

// Hàm tính tổng các phần tử lẻ trong mảng
int tong_le(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            tong += a[i];
        }
    }
    return tong;
}

// Hàm tính tổng các phần tử chẵn trong mảng
int tong_chan(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            tong += a[i];
        }
    }
    return tong;
}

// Hàm thủ tục tìm tất cả các phần tử có giá trị lớn nhất và nhỏ nhất trong mảng
void tim_max_min(int a[], int n, int *max, int *min) {
    *max = a[0]; // Giả sử phần tử đầu tiên là lớn nhất
    *min = a[0]; // Giả sử phần tử đầu tiên là nhỏ nhất
    for (int i = 1; i < n; i++) {
        if (a[i] > *max) { // Nếu phần tử thứ i lớn hơn max
            *max = a[i]; // Cập nhật max
        }
        if (a[i] < *min) { // Nếu phần tử thứ i nhỏ hơn min
            *min = a[i]; // Cập nhật min
        }
    }
}

// Hàm thủ tục hiển thị kết quả của các hàm tính tổng và tìm max, min
void hien_thi_ket_qua(int a[], int n) {
    int max, min; // Khai báo biến để lưu giá trị lớn nhất và nhỏ nhất
    tim_max_min(a, n, &max, &min); // Gọi hàm thủ tục tìm max, min
    printf("Tong tat ca cac phan tu trong mang la: %d\n", tong_mang(a, n)); // Gọi hàm tính tổng mảng
    printf("Tong cac phan tu le trong mang la: %d\n", tong_le(a, n)); // Gọi hàm tính tổng lẻ
    printf("Tong cac phan tu chan trong mang la: %d\n", tong_chan(a, n)); // Gọi hàm tính tổng chẵn
    printf("Gia tri lon nhat trong mang la: %d\n", max); // In ra giá trị lớn nhất
    printf("Gia tri nho nhat trong mang la: %d\n", min); // In ra giá trị nhỏ nhất
}

// Hàm chính
int main() {
    int n; // Số phần tử của mảng
    nhap_n(&n); // Gọi hàm thủ tục nhập n
    int a[n]; // Khai báo mảng 1 chiều có n phần tử
    nhap_mang(a, n); // Gọi hàm nhập mảng
    hien_thi_ket_qua(a, n); // Gọi hàm thủ tục hiển thị kết quả
    return 0;
}
