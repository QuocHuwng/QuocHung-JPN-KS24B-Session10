#include <stdio.h>

int main() {
    int arr[] = {50, 80, 60, 70, 40, 30, 90};
    int n = 7; 
    int i, j, vitri, giatri;
   
    for (i = 0; i < n - 1; i++) {
        vitri = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[vitri]) vitri = j;
        }
        if (vitri != i) {
            giatri = arr[i];
            arr[i] = arr[vitri];
            arr[vitri] = giatri;
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

