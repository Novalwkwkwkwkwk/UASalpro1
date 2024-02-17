#include <stdio.h>

void cariElemenSama(int A[], int B[], int C[], int ukuranA, int ukuranB, int ukuranC) {
    int i = 0, j = 0, k = 0;

    printf("Elemen yang sama pada ketiga array: ");

    while (i < ukuranA && j < ukuranB && k < ukuranC) {
        
        if (A[i] == B[j] && B[j] == C[k]) {
            printf("%d ", A[i]);
            i++, j++, k++;
        } else if (A[i] < B[j]) {
            i++;
        } else if (B[j] < C[k]) {
            j++;
        } else {
            k++;
        }
    }

    printf("\n");
}

int main() {
    int ukuranA, ukuranB, ukuranC;

    
    printf("Masukkan ukuran array A: ");
    scanf("%d", &ukuranA);

    printf("Masukkan ukuran array B: ");
    scanf("%d", &ukuranB);

    printf("Masukkan ukuran array C: ");
    scanf("%d", &ukuranC);

    int A[ukuranA], B[ukuranB], C[ukuranC];

    
    printf("Masukkan elemen array A (urutkan terlebih dahulu):\n");
    for (int i = 0; i < ukuranA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Masukkan elemen array B (urutkan terlebih dahulu):\n");
    for (int i = 0; i < ukuranB; i++) {
        scanf("%d", &B[i]);
    }

    printf("Masukkan elemen array C (urutkan terlebih dahulu):\n");
    for (int i = 0; i < ukuranC; i++) {
        scanf("%d", &C[i]);
    }

    cariElemenSama(A, B, C, ukuranA, ukuranB, ukuranC);

    return 0;
}
