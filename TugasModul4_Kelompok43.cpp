#include <iostream>

using namespace std;

// Deklarasi variabel
string nama;
float ipk;

// Deklarasi fungsi
void inputData();
void tampilkanData();
string getPesanIPK(float ipk);

int main() {
  char pilihan;

  // Perulangan untuk mengisi data kembali
  do {
    // Memanggil fungsi input data
    inputData();

    // Memanggil fungsi tampilkan data
    tampilkanData();

    // Menanyakan apakah pengguna ingin mengisi data kembali
    cout << "Apakah Anda ingin mengisi data kembali? (y/n): ";
    cin >> pilihan;
  } while (pilihan == 'y');

  return 0;
}

// Definisi fungsi input data
void inputData() {
  cout<<"Tugas Laporan Praktikum Modul 4 Kelompok 43"<<endl;
  cout << "Masukkan nama Anda: ";
  cin >> nama;

  cout << "Masukkan IPK Anda: ";
  cin >> ipk;
}

// Definisi fungsi tampilkan data
void tampilkanData() {
  cout << "Nama: " << nama << endl;
  cout << "IPK: " << ipk << endl;

  // Menampilkan pesan berdasarkan IPK
  string pesan = getPesanIPK(ipk);
  cout << pesan << endl;
}

// Definisi fungsi untuk mendapatkan pesan berdasarkan IPK
string getPesanIPK(float ipk) {
  if (ipk >= 4.01) {
    return "NILAI DARIMANA ITU!";
  } else if (ipk >= 3.5) {
    return "Lulus cumlaude!";
  } else if (ipk >= 2.76) {
    return "IPK Anda memuaskan!";
  } else if (ipk >= 2.0) {
    return "IPK Anda cukup memuaskan.";
  } else {
    return "Mohon maaf, anda tidak lulus.";
  }
}
