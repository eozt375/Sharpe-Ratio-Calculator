// Sharpe Orani Hesaplama Programi
// Bu program, kullanicidan yatirim getirisi, risksiz faiz orani ve standart sapma degerlerini alarak Sharpe oranini hesaplar.

#include <stdio.h>

int main() {
    double getiri, risksizFaiz, standartSapma, sharpe;

    printf("=Sharpe Orani Hesaplama Uygulamasi =\n\n");

    printf("Yatirim getirisini yuzde olarak giriniz: %%");
    scanf("%lf", &getiri);

    printf("Risksiz faiz oranini yuzde olarak giriniz: %%");
    scanf("%lf", &risksizFaiz);

    printf("Portfoyun standart sapmasini yuzde olarak giriniz: %%");
    scanf("%lf", &standartSapma);


    if (standartSapma == 0) {//standart sapma yerine 0 girilirse hata mesaji veriliyor
    printf("Hata: Standart sapma sifir olamaz! Risk olmadan getiri hesaplanamaz.\n");
    return 1;
}

    // Yuzde degerleri orana cevriliyor
    getiri /= 100;
    risksizFaiz /= 100;
    standartSapma /= 100;

    // Sharpe orani hesaplaniyor
    sharpe = (getiri - risksizFaiz) / standartSapma;

    printf("\nSharpe Orani = (%.2f - %.2f) / %.2f = %.2f\n", 
           getiri * 100, risksizFaiz * 100, standartSapma * 100, sharpe);


           
    // Sonucun yorumu
    if (sharpe < 1)
        printf("Yorum: Sharpe orani %.2f , Risk getiriye gore dusuk, kotu bir deger.\n", sharpe);
    else if (sharpe < 2)
        printf("Yorum: Sharpe orani %.2f , Iyi bir performans gostermektedir.\n", sharpe);
    else if (sharpe < 3)
        printf("Yorum: Sharpe orani %.2f , Cok iyi bir performans!\n", sharpe);
    else
        printf("Yorum: Sharpe orani %.2f , Mukemmel bir performans!\n", sharpe);

    return 0;
}
