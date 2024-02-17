#include <stdio.h>

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partisi(int arr[], int rendah, int tinggi) {
    int pivot = arr[tinggi];
    int i = rendah - 1;

    for (int j = rendah; j < tinggi; j++) {
        if (arr[j] <= pivot) {
            i++;
            tukar(&arr[i], &arr[j]);
        }
    }

    tukar(&arr[i + 1], &arr[tinggi]);
    return i + 1;
}

void quicksort(int arr[], int rendah, int tinggi) {
    if (rendah < tinggi) {
        int pi = partisi(arr, rendah, tinggi);
        quicksort(arr, rendah, pi - 1);
        quicksort(arr, pi + 1, tinggi);
    }
}

void cetakArray(int arr[], int ukuran) {
    for (int i = 0; i < ukuran; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

    quicksort(arr, 0, n - 1);

    printf("Array setelah diurutkan: ");
    cetakArray(arr, n);

    return 0;
}
