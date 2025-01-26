#include <iostream>
using namespace std;

int pilihan, n = 5;
string nama[5];
int nilai_bahasa[5];
int nilai_mtk[5];

int tampilkan_data();
int edit_data();
int main_menu();
int edit_nilai_byName(string nama[], int nilai_bahasa[], int nilai_mtk[], int n);
int tampilkan_rerata(string nama[], int nilai_bahasa[], int nilai_mtk[], int n);

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
        cout << "  Nilai Bahasa : " << nilai_bahasa[i] << endl;
        cout << "  Nilai mtk    : " << nilai_mtk[i] << endl;
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
    cout << "1) Tampilkan Data 5 Mahasiswa" << endl;
    cout << "2) Edit Semua data Mahasiswa " << endl;
    cout << "3) Edit Nilai mahasiswa berdasarkan nama " << endl;
    cout << "4) Tampilkan Rata - rata Nilai " << endl;
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
            case 3:
                edit_nilai_byName(nama, nilai_bahasa, nilai_mtk, n);
            break;
            case 4:
                tampilkan_rerata(nama, nilai_bahasa, nilai_mtk, n);
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
        cout << "  Nilai bahasa : ";
        cin >> nilai_bahasa[i];
        cout << "  Nilai mtk    : ";
        cin >> nilai_mtk[i];
    }
    cout << "Selesai, Masukan 0 untuk kembali" << endl;
    cin >> pilihan;
    if (pilihan == 0) {
        return main_menu();
    } else {
        return main_menu();
    }
}

int edit_nilai_byName(string nama[], int nilai_bahasa[], int nilai_mtk[], int n) {
    string cari_nama;
    bool ditemukan = false;

    cout << "=================================" << endl;
    cout << "====== Edit nilai by name. ======" << endl;
    cout << "=================================" << endl;

    cout << "Masukan nama mahasiswa yang akan di edit :" << endl;
    cin >> cari_nama;

    for (int i = 0; i < n; i++) {
        if (nama[i] == cari_nama) {
            ditemukan = true;

            cout << "Data Mahasiswa ke-" << i + 1 << endl;
            cout << "Nama              : " << nama[i] << endl;
            cout << "Edit Nilai bahasa : " ;
            cin >> nilai_bahasa[i];
            cout << "Edit Nilai mtk    : " ;
            cin >> nilai_mtk[i];

            cout << "Data berhasil disimpan !" << endl;
        }
    }

    if(!ditemukan) {
        cout << "Data Mahasiswa tidak ditemukan !" << endl;
    }
    cout << endl;

    cout << "Selesai, Masukan 0 untuk kembali" << endl;
    cin >> pilihan;
    if (pilihan == 0) {if(!ditemukan) {
        cout << "Data Mahasiswa tidak ditemukan !" << endl;
    }
        return main_menu();
    } else {
        return main_menu();
    }
}

int tampilkan_rerata(string nama[], int nilai_bahasa[], int nilai_mtk[], int n) {
    string cari_nama;
    cout << "=================================" << endl;
    cout << "====== RATA-RATA NILAI MHS ======" << endl;
    cout << "=================================" << endl;
    cout << "Masukan nama mahasiswa yang akan ditampilkan rata-ratanya: ";
    cin >> cari_nama;

    bool ditemukan = false;

    for (int i = 0; i < n; i++) {
        if (nama[i] == cari_nama) {
            ditemukan = true;
            double rata_rata = (nilai_bahasa[i] + nilai_mtk[i]) / 2.0;

            cout << "\nData Mahasiswa ke-" << i + 1 << endl;
            cout << "Nama            : " << nama[i] << endl;
            cout << "Nilai Bahasa    : " << nilai_bahasa[i] << endl;
            cout << "Nilai Mtk       : " << nilai_mtk[i] << endl;
            cout << "Rata-rata       : " << rata_rata << endl;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Nama mahasiswa tidak ditemukan!" << endl;
    }


    cout << "Selesai, Masukan 0 untuk kembali" << endl;
    cin >> pilihan;
    if (pilihan == 0) {
        return main_menu();
    } else {
        return main_menu();
    }
}