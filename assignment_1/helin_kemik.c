#include <stdio.h> // Standart giris/cikis kütüphanesi

#define PI 3.14 // Pi sabiti
#define UNIT_PRICE 0.912857 // Su birim fiyati

int main() {
    printf("ODEV1 - HELİN KEMİK TARAFINDAN\n");

    // 6.1 - Konik hacim hesaplama
    float height, diameter, volume;
    printf("\n[6.1] Koninin capi ve yüksekliði: ");
    scanf("%f %f", &height, &diameter);
    volume = (PI * diameter * height) / 3.0;
    printf("Hacim: %.2f\n", volume);

    // 6.4 - ASCII sanat
    printf("\n[6.4] ASCII Sanat:\n");
    printf("    .-\"-, \n");
    printf("  / _  _   \\\n");
    printf("  \\ @  @   /\n");
    printf("  (_  =  _)\n");
    printf("    ')  (__\n");
    printf("    /(  (_ )_,\n");
    printf("    \\___(/-\"\n");
    printf("  ___| | |__\n");
    printf(" ( (__ | __) )\n");

    // 6.16 - Harmonik ortalama
    int num1, num2;
    float harmonic_mean;
    printf("\n[6.16] iki tam sayi girin: ");
    scanf("%d %d", &num1, &num2);
    if (num1 == 0 || num2 == 0) {
        printf("Hata: sifirdan farkli iki sayi girilmelidir.\n");
        return 0;
    }
    harmonic_mean = 2.0 * num1 * num2 / (num1 + num2);
    printf("Harmonik Ortalama: %.2f\n", harmonic_mean);

    // 6.22 - Su faturasi hesaplama
    int start_meter, end_meter;
    float usage, usage_cost, wastewater, bill;
    printf("\n[6.22] ilk ve son su göstergesi: ");
    scanf("%d %d", &start_meter, &end_meter);
    usage = end_meter - start_meter;
    usage_cost = usage * UNIT_PRICE;
    wastewater = usage_cost * 0.5;
    bill = usage_cost + wastewater;
    printf("Kullanilan Su: %.2f\n", usage);
    printf("Tüketim Tutarý: %.2f\n", usage_cost);
    printf("Atiksu Bedeli: %.2f\n", wastewater);
    printf("Toplam Fatura: %.2f TL\n", bill);

    // 6.27 - Orta nokta hesaplama
    float x_start, x_end, y_start, y_end, x_mid, y_mid;
    printf("\n[6.27] x1, x2, y1, y2 deðerlerini girin: ");
    scanf("%f %f %f %f", &x_start, &x_end, &y_start, &y_end);
    x_mid = (x_start + x_end) / 2;
    y_mid = (y_start + y_end) / 2;
    printf("x orta noktasý: %.0f\n", x_mid);
    printf("y orta noktasý: %.0f\n", y_mid);

    return 0;
}
