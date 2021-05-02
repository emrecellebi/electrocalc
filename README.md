# electrocalc

- ``-h`` yada ``--help`` Yardım Dökümanı
- ``-v`` yada ``--version`` Versiyon
- ``-rc`` Üç Renk Direnç Hesaplama birinci parametre olarak ilk iki renk kodu. İkinci parametre olarak rengin üst(kat sayayısı) yazılır.
- ``-cc`` Kapasitör Hesaplama birinci parametre olarak ilk iki değer. İkinci parametre olarak son değer yazılır. 
- ``-hcsr`` Ultrasonic Ses Dalgası Hesaplama Sadece ortam sıcaklığı verilir.
- ``-vd`` Voltaj Bölücü Hesaplama birinci parametre olarak direncin ``--ohm``, ``--kilohm`` yada ``--megaohm`` olarak seçip. İkinci prametre olarak voltajı. Üçüncü parametre R1 direnci. Son parametre olarak R2 direnci verilir.
- ``-rt`` Direnç Renk Kodları
- ``-ct`` Kapasitör Toleransları
- ``-a``  Toplama İşlemi
- ``-m`` Çarpma İşlemi
- ``-d`` Bölme İşlemi
- ``-s`` Çıkartma İşlemi
- ``-ucpl`` Kullanılan komutların parametre listesi.

# Örnek Kullanım
- ``electrocalc -rc 22 1`` Sonuç 220 ohm
- ``electrocalc -cc 10 3`` Sonuç 10000 pf
- ``electrocalc -hcsr 22`` Sonuç 29.0631 us/cm
- ``electrocalc -vd --kilohm 12 6.2 10`` Sonuç 7.40741 Voltaj
- ``electrocalc -a 5 2`` Sonuç 7
- ``electrocalc -m 5 2`` Sonuç 10
- ``electrocalc -d 5 2`` Sonuç 2
- ``electrocalc -s 5 2`` Sonuç 3
