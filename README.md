
OpenCV Drawing
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

