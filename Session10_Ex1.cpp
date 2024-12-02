#include <stdio.h>

int main() {
    
    int mang[5] = {10, 20, 30, 40, 50}; 
    int gia_tri; 
    int tim_thay = 0;

    printf("Nhap vao mot phan tu de tim: ");
    scanf("%d", &gia_tri);

    for (int i = 0; i < 5; i++) {
        if (mang[i] == gia_tri) {
            tim_thay = 1; 
            printf("Phan tu %d duoc tim thay tai vi tri %d\n", gia_tri, i);
            break; 
        }
    }
    if (!tim_thay) {
        printf("Phan tu %d khong ton tai trong mang\n", gia_tri);
    }

    return 0;
}
