#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, harga_setelah_diskon, diskon;

    // Input kode, jenis, dan harga
    printf("Masukkan kode: ");
    scanf("%d", &kode);
    printf("Masukkan jenis (A/B/C): ");
    scanf(" %c", &jenis); // spasi sebelum %c untuk menghindari karakter newline
    printf("Masukkan harga: ");
    scanf("%f", &harga);

    // Menghitung diskon berdasarkan jenis
    switch (jenis) {
        case 'A':
            diskon = 0.10; // 10%
            break;
        case 'B':
            diskon = 0.15; // 15%
            break;
        case 'C':
            diskon = 0.20; // 20%
            break;
        default:
            printf("Jenis tidak valid. Harap masukkan A, B, atau C.\n");
            return 1; // Keluar program jika jenis tidak valid
    }

    // Menghitung harga setelah diskon
    harga_setelah_diskon = harga * (1 - diskon);

    // Menampilkan hasil
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", jenis, diskon * 100, harga_setelah_diskon);

    return 0;
}
