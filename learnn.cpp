#include <iostream>
using namespace std;

int main() {

    // İki boyutlu diziler
    int dizi[2][3] = { {-8, 4, 5}, {0, 8, 9} };
    int dizi2[2][3] = { -8, 4, 5, 0, 8, 9 };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << dizi[i][j] << " ";
        }
        cout << endl;
    }

    // Produced By Kamil Umut Araz

    int k;
    for (k = 0; k < 10; k++);
    cout << k << endl;

    // 1 ile 21 arasındaki çift sayıları aralarında , olacak şekilde yazan program
    for (int s = 2; s < 21; s += 2) {
        cout << s << ", ";
    }
    cout << endl;

    // 1 ile 21 arasındaki tek sayıları aralarında , olacak şekilde yazan program
    for (int t = 1; t < 21; t += 2) {
        cout << t << ", ";
    }
    cout << endl;

    // Ekrana alt alta 5 defa merhaba yazdıran program
    int m = 0;
    while (m < 5) {
        cout << "merhaba" << endl;
        m++;
    }

    // While döngüsü ile 1 ile 21 arasındaki çift sayıları aralarında , olacak şekilde yazan program
    int c = 2;
    while (c < 21) {
        cout << c << ", ";
        c += 2;
    }
    cout << endl;

    // Break kullanımı
    int b;
    for (b = 0; b < 100; b++) {
        if (b == 50)
            break;
        cout << b << endl;
    }
    cout << "i değeri " << b << " iken döngüden çıkıldı" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

    // Continue kullanımı
    int o;
    for (o = 0; o < 100; o++) {
        if (o == 50)
            continue; // Bir bakıma break ile continue aynıdır.
        cout << o << endl;
    }
    cout << "o değeri " << o << " iken döngüden çıkıldı" << endl;

    // Kullanıcının klavyeden art arda girdiği 10 adet tam sayıdan sadece pozitif olanların toplamını bulacak kod
    int sayi, toplam = 0;
    for (int l = 0; l < 10; l++) {
        cout << "Lutfen " << l + 1 << ". sayiyi giriniz: ";
        cin >> sayi; // Girdi istenen komut cin'dir
        if (sayi > 0) {
            toplam += sayi;
        }
    }
    cout << "Girilen pozitif sayilarin toplami: " << toplam << endl;
    cout << endl;

    // Kullanıcıdan 15 sayı isteyip girilen negatif sayıların toplamlarını bulan program
    int sayi2, toplam2 = 0;
    for (int e = 0; e < 15; e++) {
        cout << e + 1 << ". sayıyı giriniz: ";
        cin >> sayi2; // Bizden girdi isteyen komut cin'dir
        if (sayi2 < 0) {
            toplam2 += sayi2;
        }
    }
    cout << "Girilen negatif sayıların toplamı: " << toplam2 << endl;

    int sayi3;
    cin >> sayi3;

    return 0;
}
