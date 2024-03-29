#include <iostream>

using namespace std;
string nama;
float ipk;
void inputData();
void tampilkanData();
string getPesanIPK(float ipk);

int main() {
  char pilihan;
  do {
    inputData();
    tampilkanData();
    cout << "Apakah Anda ingin mengisi data kembali? (y/n): ";
    cin >> pilihan;
  } while (pilihan == 'y');

  return 0;

  //commit 1
  //commit 2

  
}
void inputData() {
  cout<<"Tugas Laporan Praktikum Modul 4 Kelompok 43"<<endl;
  cout << "Masukkan nama Anda: ";
  cin >> nama;
  cout << "Masukkan IPK Anda: ";
  cin >> ipk;
}

void tampilkanData() {
  cout << "Nama: " << nama << endl;
  cout << "IPK: " << ipk << endl;
  string pesan = getPesanIPK(ipk);
  cout << pesan << endl;
}

string getPesanIPK(float ipk) {
  if (ipk >= 4.01) {
    return "Maaf, tidak ada nilai yang melebihi itu";
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
