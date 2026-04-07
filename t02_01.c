// 12S25006 - Rafael Dietrich Z Simatupang

#include <stdio.h>

struct buku {
    float harga;
    float diskon;
    float jumlah;
};

int main(int _argv, char **_argc)
{
    struct buku buku1;

    scanf("%f", &buku1.jumlah);
    scanf("%f", &buku1.harga);

    float total_harga_awal = buku1.jumlah * buku1.harga;
    float persentase_diskon = 0.0;

    if (total_harga_awal > 500000.0) {
        persentase_diskon = 0.15;
    } else if (total_harga_awal > 100000.0) { 
        persentase_diskon = 0.10;
    } else if (buku1.jumlah > 5.0) {
        persentase_diskon = 0.05;
    }

    buku1.diskon = total_harga_awal * persentase_diskon;
    float total_bayar = total_harga_awal - buku1.diskon;

    if (buku1.diskon == 0.0) {
        printf("---\n");
    } else {
        printf("%.2f\n", buku1.diskon);
    }
    printf("%.2f\n", total_bayar);

    return 0;
}