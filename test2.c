#include <stdio.h>


void binarySearch(int arr[], int n, int target, int *steps, int *position) {
    int left = 0, right = n - 1;
    int ditemukan = 0;

    while (left <= right) {
        (*steps)++;
        int mid = left + (right - left) / 2;

        
        if (arr[mid] == target) {
            *position = mid + 1;
            ditemukan = 1;
            break;
        }

        
        else if (arr[mid] < target)
            left = mid + 1;

       
        else
            right = mid - 1;
    }

    
    if (!ditemukan) {
        *position = -1;
    }
}

int main() {
    int n, target;

   
    printf("Masukkan jumlah data mahasiswa: ");
    scanf("%d", &n);

    int data[n];

    printf("Masukkan nilai mahasiswa (terurut):\n");
    for (int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("Masukkan nilai mahasiswa yang dicari: ");
    scanf("%d", &target);

    int steps = 0, position = 0;

   
    binarySearch(data, n, target, &steps, &position);

    
    if (position != -1) {
        printf("Data ditemukan pada posisi %d.\n", position);
    } else {
        printf("Data tidak ditemukan.\n");
    }

    printf("Langkah-langkah pencarian: %d\n", steps);

    return 0;
}
