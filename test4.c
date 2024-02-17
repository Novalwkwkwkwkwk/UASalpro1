#include <stdio.h>


int mencariMax(int arr[], int n) {
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int n;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int data[n];

    printf("Masukkan data:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    // Menghitung jumlah
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        jumlah += data[i];
    }

    // Menghitung rata-rata
    float rataRata = (float)jumlah / n;

    // Menghitung nilai tengah
    int max = findMax(data, n);

    printf("Jumlah: %d\n", jumlah);
    printf("Rata-rata: %.2f\n", rataRata);
    printf("Nilai Tertinggi: %d\n", max);

    return 0;
}
