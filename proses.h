#include<iostream>
#include<fstream>
#include <sstream>
using namespace std;
class Proses {
public:
  void cetak() { cout << "anda sebagai proses \n"; }
  int toint(string bilangan) {
    int p;
    stringstream ss;
    ss << bilangan;
    ss >> p;
    return p;
  }
  /*int membilang(string bilangan) {
    int p;
   switch (bilangan) {
  case "0" : p=0; break;
   case "1" : p=1; break;
   case "2" : p=2; break;
  case "3" : cout << "tiga"; break;
   case "4" : p=4; break;
   case "5" : cout << "lima"; break;
  case "6" : cout << "enam"; break;
   case "7" : cout << "tujuh"; break;
   case "8" :p=8; break;
   case "9" : cout << "sembilan"; break;
   case "10" : cout << "sepuluh"; break;
  case "11" : cout << "sebelas"; break;
   default : cout << "di luar range\n";
  }
    return p;
  }*/
  void getData() {
    ambil_data.open("../pra_data/input.txt");
    while (!ambil_data.eof()) {
      getline(ambil_data, data_file[index]);
      //  ambil_data >> data_file[index];
      index += 1;
    }
    

    /*
                         if (jarak <= 3){
                                 total = jumlah*21000;
                                 cout << " Ongkir : 15000\n";
                                 if (total > 25000){
                                         cout << " Diskon Ongkir: 3000\n";
                                         x = total-3000;
                                         cout << " Total : " << x << endl;
                                 }
                                 if (total > 50000){
                                         cout << " Diskon Ongkir: 5000 + 15%
       Pembelian\n"; diskon = total*15/100; x = total-diskon-5000; cout << "
       Total : " << x << endl;
                                 }
                                 if (total > 150000){
                                         cout << " Diskon Ongkir: 8000 + 35%
       Pembelian\n"; diskon = total*35/100; x = total-diskon-8000; cout << "
       Total : " << x << endl;
                                 }
                         }
                         if (jarak > 3){
                                 total = jumlah*21000;
                                 cout << " Ongkir : 25000\n";
                                 if (total > 25000){
                                         cout << " Diskon Ongkir: 3000\n";
                                         x = total-3000;
                                         cout << " Total : " << x << endl;
                                 }
                                 if (total > 50000){
                                         cout << " Diskon Ongkir: 5000 + 15%
       Pembelian\n"; diskon = total*15/100; x = total-diskon-5000; cout << "
       Total : " << x << endl;
                                 }
                                 if (total > 150000){
                                         cout << " Diskon Ongkir: 8000 + 35%
       Pembelian\n"; diskon = total*35/100; x = total-diskon-8000; cout << "
       Total : " << x << endl;
                                 } */
    ambil_data.close();
    nama = data_file[0];
    plhn = data_file[1];
    jumlah = toint(data_file[2]);
    jarak = toint(data_file[3]);
    cout << jumlah << endl;
    // cout<<data_file[2];
    }
void toFile(){
  
}

  private:
    ifstream ambil_data;
    string data_file[30];
    string nama, plhn;
    int index = 0;
    int jarak, total, jumlah, x, diskon, Proses, menu;
  };