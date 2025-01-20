#include <iostream>
using namespace std;

int pilihan, n = 10;
string nama[10];
int nilai_mahasiswa[10];

int tampilkan_data();
int edit_data();
int main_menu();

int main() {
    main_menu();
    return 0;
}

int tampilkan_data() {
    cout << "#############################" << endl;
    cout << "========DATA NILAI MHS=======" << endl;
    cout << "#############################" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "  Nama         : " << nama[i] << endl;
        cout << "  Nilai        : " << nilai_mahasiswa[i] << endl;
    }

    cout << "Selesai, Masukan 0 untuk kembali" << endl;
    cin >> pilihan;
    if (pilihan == 0) {
        return main_menu();
    } else {
        return main_menu();
    }
}

int main_menu() {
    cout << "#############################" << endl;
    cout << "=====APLIKASI NILAI MHS======" << endl;
    cout << "#############################" << endl;
    cout << "1) Tampilkan Data 10 Mahasiswa" << endl;
    cout << "2) Edit Seluruh Mahasiswa" << endl;
    cout << "0) Exit" << endl;
    cout << "Pilih Nomor : " << endl;

    cin >> pilihan;
    do {
        switch (pilihan) {
            case 1:
                tampilkan_data();
            break;
            case 2:
                edit_data();
            break;
            case 0:
                return 1;
            break;
        }
    } while (pilihan != 0);
}

int edit_data() {
    cout << "#############################" << endl;
    cout << "========DATA NILAI MHS=======" << endl;
    cout << "#############################" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "  Nama         : ";
        cin >> nama[i];
        cout << "  Nilai        : ";
        cin >> nilai_mahasiswa[i];
    }
    cout << "Selesai, Masukan 0 untuk kembali" << endl;
    cin >> pilihan;
    if (pilihan == 0) {
        return main_menu();
    } else {
        return main_menu();
    }
}
