#include <stdio.h>

int hitung_lama_bekerja(int jam_masuk, int jam_keluar) {
    // Jika jam keluar lebih kecil dari jam masuk, berarti pegawai pulang setelah tengah malam
    if (jam_keluar < jam_masuk) {
        jam_keluar += 12;  // Menambahkan 12 untuk jam keluar di hari berikutnya
    }
    return jam_keluar - jam_masuk;  // Menghitung lama bekerja
}

int main() {
    int jam_masuk, jam_keluar;

    // Input jam masuk dan jam keluar
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jam_masuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jam_keluar);

    // Validasi input
    if (jam_masuk >= 1 && jam_masuk <= 12 && jam_keluar >= 1 && jam_keluar <= 12) {
        int lama_bekerja = hitung_lama_bekerja(jam_masuk, jam_keluar);
        printf("Lama bekerja %d jam\n", lama_bekerja);
    } else {
        printf("Input tidak valid. Harap masukkan jam antara 1 dan 12.\n");
    }

    return 0;
}
