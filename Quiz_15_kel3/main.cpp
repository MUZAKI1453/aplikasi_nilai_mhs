#include <iostream>
using namespace std;

int pilihan;
const int mapel = 2;
const int n = 5;
string nama[n];
int nilai_mhs[n][mapel];
bool dataTerisi = false;


int tampilkan_data();
int edit_data();
int main_menu();
int edit_nilai_byName(string nama[], int nilai_mhs[n][mapel], int n);
int tampilkan_rerata(string nama[], int nilai_mhs[n][mapel], int n);

int main() {
    main_menu();
    return 0;
}

int tampilkan_data() {
    cout << "#############################" << endl;
    cout << "========DATA NILAI MHS=======" << endl;
    cout << "#############################" << endl;

    if (!dataTerisi) {
        cout << "Data masih kosong ! " << endl;

        cout << "Selesai, Masukan 0 untuk kembali ke menu" << endl;
        cin >> pilihan;
        if (pilihan == 0) {
            return main_menu();
        } else {
            return main_menu();
        }

    } else {

        for (int i = 0; i < n; i++) {
            cout << "Data Mahasiswa ke-" << i + 1 << endl;
            cout << "  Nama         : " << nama[i] << endl;
            cout << "  Nilai Bahasa : " << nilai_mhs[i][0] << endl; // Perbaikan di sini
            cout << "  Nilai mtk    : " << nilai_mhs[i][1] << endl; // Perbaikan di sini
        }


        cout << "Selesai, Masukan 0 untuk kembali ke menu" << endl;
        cin >> pilihan;
        if (pilihan == 0) {
            return main_menu();
        } else {
            return main_menu();
        }
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
                edit_nilai_byName(nama, nilai_mhs, n);
            break;
            case 4:
                tampilkan_rerata(nama, nilai_mhs, n);
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
        cin >> nilai_mhs[i][0];
        cout << "  Nilai mtk    : ";
        cin >> nilai_mhs[i][1];
    }

    dataTerisi = true;

    cout << "Selesai, Masukan 0 untuk kembali ke menu" << endl;
    cin >> pilihan;
    if (pilihan == 0) {
        return main_menu();
    } else {
        return main_menu();
    }
}

int edit_nilai_byName(string nama[], int nilai_mhs[n][mapel], int n) {
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
            cout << "Edit Nilai bahasa : ";
            cin >> nilai_mhs[i][1];
            cout << "Edit Nilai mtk    : ";
            cin >> nilai_mhs[i][2];

            cout << "Data berhasil disimpan !" << endl;
        }
    }

    if(!ditemukan) {
        cerr << "Data Mahasiswa tidak ditemukan !" << endl;
    }
    cout << endl;

    cout << "Selesai, Masukan 0 untuk kembali ke menu" << endl;
    cin >> pilihan;
    if (pilihan == 0) {
        return main_menu();
    } else {
        return main_menu();
    }
}

int tampilkan_rerata(string nama[], int nilai_mhs[n][mapel], int n) {
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
            double rata_rata = (nilai_mhs[i][1] + nilai_mhs[i][2]) / 2.0;

            cout << "\nData Mahasiswa ke-" << i + 1 << endl;
            cout << "Nama            : " << nama[i] << endl;
            cout << "Nilai Bahasa    : " << nilai_mhs[i][1] << endl;
            cout << "Nilai Mtk       : " << nilai_mhs[i][2] << endl;
            cout << "Rata-rata       : " << rata_rata << endl;
            break;
        }
    }

    if (!ditemukan) {
        cerr << "Nama mahasiswa tidak ditemukan!" << endl;
    }


    cout << "Selesai, Masukan 0 untuk kembali ke menu" << endl;
    cin >> pilihan;
    if (pilihan == 0) {
        return main_menu();
    } else {
        return main_menu();
    }
}