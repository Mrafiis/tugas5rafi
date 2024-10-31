#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_parkir;
    int biaya;

    // Input jam masuk dan jam keluar
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jam_masuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jam_keluar);

    // Validasi input
    if (jam_masuk < 1 || jam_masuk > 12 || jam_keluar < 1 || jam_keluar > 12) {
        printf("Input tidak valid. Harap masukkan jam antara 1 dan 12.\n");
        return 1;
    }

    // Hitung lama parkir
    if (jam_keluar < jam_masuk) {
        jam_keluar += 12;  // Menyesuaikan jam keluar setelah tengah malam
    }
    lama_parkir = jam_keluar - jam_masuk;

    // Hitung biaya parkir
    if (lama_parkir <= 2) {
        biaya = 2000; // Biaya untuk 2 jam pertama
    } else {
        biaya = 2000 + (lama_parkir - 2) * 500; // Biaya untuk jam berikutnya
    }

    // Tampilkan hasil
    printf("Lama parkir: %d jam\n", lama_parkir);
    printf("Biaya = %d\n", biaya);

    return 0;
}
