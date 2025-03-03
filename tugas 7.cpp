#include <iostream>

using namespace std;

int main (){
    cout << "## Program Menghitung Gaji Karyawan ##" <<endl;
    cout << "======================================" <<endl;
    cout << endl;

    string nama;
    char golongan;
    int jam_kerja, upah_per_jam, total_upah;

    // proses input
    cout << "Nama karyawan: ";
    getline(cin,nama);

    cout << "Golongan: ";
    cin >> golongan;

    cout << "Jumlah jam kerja: ";
    cin >> jam_kerja;

    // tentukan jumlah upah per jam berdasarkan golongan
    switch (golongan){
        case 'A':
            upah_per_jam = 7500;
            break;
            case 'B':
            upah_per_jam = 1500;
            break;
        case 'C':
            upah_per_jam = 10000;
            break;
        case 'D':
            upah_per_jam = 13000;
            break;
    }

    total_upah = jam_kerja * upah_per_jam;

   // cek apakah jam kerja lebih dari 48 jam
   if ( (jam_kerja - 8) > 0 ) {
     total_upah = total_upah + ((jam_kerja - 8)*4000);
  }
    // Proses output
    cout << endl;
    cout << nama << "menerima upah Rp." << total_upah << "per minggu";
     cout << endl;


 return 0;
}
