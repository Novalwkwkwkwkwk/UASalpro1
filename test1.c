#include <stdio.h>
#include <limits.h>

void cariTigaTerbesar(int arr[], int n) {
    int pertama, kedua, ketiga;

    
    pertama = kedua = ketiga = INT_MIN;

    
    for (int i = 0; i < n; i++) {
        
        if (arr[i] > pertama) {
            ketiga = kedua;
            kedua = pertama;
            pertama = arr[i];
        }
        
        else if (arr[i] > kedua) {
            ketiga = kedua;
            kedua = arr[i];
        }
       
        else if (arr[i] > ketiga) {
            ketiga = arr[i];
        }
    }

    
    printf("Tiga elemen terbesar: %d, %d, %d\n", pertama, kedua, ketiga);
}

int main() {
    int n;

    
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Masukkan elemen array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    cariTigaTerbesar(arr, n);

    return 0;
}
