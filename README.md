# Sharpe-Ratio-Calculator
# Sharpe Oranı Hesaplama Programı

Bu basit C programı, kullanıcıdan aldığı yatırım getirisi, risksiz faiz oranı ve standart sapma değerlerini kullanarak bir portföyün **Sharpe Oranını** hesaplar. Sharpe oranı, alınan risk birimi başına elde edilen fazla getiriyi (risksiz getirinin üzerindeki getiri) ölçen bir performans ölçütüdür.

## Nasıl Çalışır?

Program, kullanıcıdan aşağıdaki üç değeri **yüzde (%) olarak** girmesini ister:

1.  **Yatırım Getirisi:** Portföyün veya yatırımın toplam getirisi.
2.  **Risksiz Faiz Oranı:** Risksiz kabul edilen bir yatırımın (örneğin devlet tahvili) getirisi.
3.  **Portföyün Standart Sapması:** Portföyün getirisinin oynaklığını (riskini) gösteren değer.

### Formül

Sharpe Oranı aşağıdaki formülle hesaplanır:

Sharpe = {Getiri - RisksizFaiz}\{StandartSapma}


Program, girilen yüzde değerlerini ondalık orana çevirerek hesaplamayı yapar ve sonucu ekrana yazdırır.

##  Gereksinimler

Bu program standart C kütüphanelerini kullanır. Derlemek ve çalıştırmak için bir C derleyicisine (örneğin GCC) ihtiyacınız vardır.



4.  İstenen değerleri girin ve programın Sharpe Oranını ve buna ait yorumu hesaplamasını izleyin.

### Örnek Çalışma
