#include<iostream>
using namespace std;

int main(){

int pilihan;
    float sisi, panjang, lebar, alas, tinggi, luas;

    cout << "Program Menghitung Luas Bangun Datar\n";
    cout << "Pilih bangun datar yang ingin dihitung luasnya:\n";
    cout << "1. Persegi"<<endl;
    cout << "2. Persegi Panjang"<<endl;
    cout << "3. Segitiga"<<endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi adalah: " << luas << endl;
            break;
        case 2:
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang adalah: " << luas << endl;
            break;
        case 3:
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga adalah: " << luas << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
return 0;
}
