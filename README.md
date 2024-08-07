  <a href="https://www.cplusplus.com/" target="_blank" rel="noreferrer"> 
        <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/> 
    </a>Learn Cpp <br>
1. İki Boyutlu Diziler ve Ekrana Yazdırma
dizi ve dizi2 adında iki tane 2x3 boyutlarında iki boyutlu dizi tanımlanır.
İç içe for döngüsü kullanılarak dizi elemanları ekrana yazdırılır.
2. For Döngüsü ve Değer Yazdırma
k değişkeniyle bir for döngüsü çalıştırılır. Döngü bitiminde k değişkeninin değeri ekrana yazdırılır.
Döngü sonunda k değeri 10 olur, çünkü döngü tamamlanmıştır.
3. Çift Sayıları Yazdırma
1 ile 21 arasındaki çift sayılar, aralarında virgül olacak şekilde ekrana yazdırılır.
4. Tek Sayıları Yazdırma

1 ile 21 arasındaki tek sayılar, aralarında virgül olacak şekilde ekrana yazdırılır.
5. Ekrana "Merhaba" Yazdırma <br>
Bir while döngüsü kullanılarak ekrana 5 defa "merhaba" yazdırılır.
6. While Döngüsü ile Çift Sayıları Yazdırma
1 ile 21 arasındaki çift sayılar, while döngüsü kullanılarak aralarında virgül olacak şekilde ekrana yazdırılır.
7. Break Kullanımı
Bir for döngüsünde b değişkeni 0'dan 100'e kadar sayar.
b değişkeni 50 olduğunda döngü break ifadesiyle sonlanır.
Sonuç olarak, 50'ye kadar olan sayılar yazdırılır ve ardından "i değeri 50 iken döngüden çıkıldı" ifadesi ekrana yazdırılır.
8. Continue Kullanımı
Bir for döngüsünde o değişkeni 0'dan 100'e kadar sayar.
o değişkeni 50 olduğunda continue ifadesiyle o tur atlanır.
Sonuç olarak, 0'dan 99'a kadar olan sayılar (50 hariç) yazdırılır ve ardından "o değeri 100 iken döngüden çıkıldı" ifadesi ekrana yazdırılır.
9. Pozitif Sayıların Toplamını Bulma
Kullanıcıdan 10 adet tam sayı girmesi istenir.
Girilen sayılardan sadece pozitif olanların toplamı hesaplanır ve ekrana yazdırılır.
10. Negatif Sayıların Toplamını Bulma
Kullanıcıdan 15 adet tam sayı girmesi istenir.
Girilen negatif sayıların toplamı hesaplanır ve ekrana yazdırılır.
Kodun sonunda kullanıcıdan bir sayı girmesi istenir ve program sona erer. Bu, kullanıcıya programın bitmeden önce bir sayı girme fırsatı verir. <br>
 <a href="https://www.python.org" target="_blank" rel="noreferrer"> 
        <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/python/python-original.svg" alt="python" width="40" height="40"/> 
    </a> 
OpenCV Drawing <br>
1. Kısım: Çizim Yapma
Bu bölüm, web kamerasından alınan canlı görüntü üzerinde fare ile çizim yapmayı sağlar.

Kameradan Video Akışını Başlatma:

Web kamerasından video akışı başlatılır.
Çizim Durumu ve Başlangıç Noktası:

Çizim durumunu ve başlangıç noktalarını tanımlayan değişkenler oluşturulur.
Mouse Callback Fonksiyonu:

Fareye tıklandığında, hareket ettirildiğinde ve tıklama bırakıldığında çizim işlemleri gerçekleştirilir.
cv2.line fonksiyonu kullanılarak çizgiler çizilir.
Pencere Oluşturma ve Mouse Callback Fonksiyonunu Ayarlama:

cv2.namedWindow ile bir pencere oluşturulur ve cv2.setMouseCallback ile fare olayları izlenir.
Sonsuz Döngü:

Kameradan alınan görüntüler üzerinde çizim işlemleri gerçekleştirilir ve görüntü ekranda gösterilir.
'q' tuşuna basıldığında döngü sonlanır.
2. Kısım: Cilt Rengi Tespiti
Bu bölüm, web kamerasından alınan canlı görüntüde cilt rengini tespit eder.

Kameradan Video Akışını Başlatma:

Web kamerasından video akışı başlatılır.
Sonsuz Döngü:

Kameradan alınan görüntü HSV renk uzayına dönüştürülür.
Cilt rengini temsil eden HSV renk aralığında maske oluşturulur.
Morfolojik işlemlerle maske temizlenir.
Maske, orijinal görüntüye uygulanarak cilt rengi tespit edilen bölgeler çıkarılır.
Orijinal görüntü, maske ve sonuç görüntüsü ekranda gösterilir.
'q' tuşuna basıldığında döngü sonlanır.
Her iki bölümde de, canlı video akışını alıp, belirli işlemleri gerçekleştirdikten sonra sonuçları ekranda gösterir ve 'q' tuşuna basıldığında program sonlanır.
![Ekran görüntüsü 2024-07-30 105028](https://github.com/user-attachments/assets/887322f9-2f2f-46fa-b311-e08fb4db4a5e)


![Ekran görüntüsü 2024-07-30 104822](https://github.com/user-attachments/assets/5f5e7f44-d6a6-4970-b5c6-c41b2e51c32d)
