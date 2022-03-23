#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
using namespace std;
struct data_spbu{
	string nama_minyak;
	string nama_kode;
	float total;
};
int main(){
	ofstream keluaran;
	keluaran.open("mykasir.txt");
	time_t now = time(0);
    char* tm = ctime(&now);   
	string nama_pelanggan, jenis, code;
	data_spbu spb;
	string nama_minyak[2]={"pertalite", "pertamax"};
	string nama_kode[2]={"1","2"};
	float liter, harga, total, bayar;
	
	cout<<"SELAMAT DATANG DI SPBU A3"<<endl;
	cout<<"Jalan Malioboro, no.10, Yogyakarta"<<endl;
	cout<<"harga dan kode minyak"<<endl;
	cout<<"kode 		        jenis minyak	        	harga"<<endl;
	cout<<"1. 			Pertalite			Rp. 7.000/L"<<endl;
	cout<<"2. 			Pertamax			Rp. 9.000/L"<<endl;
	cout<<"\nMasukkan nama pelanggan : ";cin>>nama_pelanggan;
	cout<<"Masukkan kode bbm : ";cin>>spb.nama_kode;
	if(spb.nama_kode=="1"){
		cout<<"Jenis BBM : "<<nama_minyak[0]<<endl;
		jenis = "Pertalite";
		cout<<"masukkan harga : "; cin>>harga;
		cout<<"masukkan jumlah liter : "; cin>>liter;
		total = liter * harga;
		cout<<"Harga bayar = "<<total<<endl;
		cout<<"masukkan jumlah bayar = "; cin>>bayar;
		cout<<"kembalian = "<<bayar - total<<endl;
		cout <<"Waktu : " <<tm;
		
	}
	else if(spb.nama_kode=="2"){
		cout<<"Jenis BBM : "<<nama_minyak[1]<<endl;
		jenis = "Pertamax";
		cout<<"masukkan harga : "; cin>>harga;
		cout<<"masukkan jumlah liter : "; cin>>liter;
		total = liter * harga;
		cout<<"Harga bayar = "<<total<<endl;
		cout<<"masukkan jumlah bayar = "; cin>>bayar;
		cout<<"kembalian = "<<bayar - total<<endl;
		cout <<"Waktu : " <<tm;
		
	}
	keluaran<<"SELAMAT DATANG DI SPBU A3"<<endl;
	keluaran<<"Jalan Malioboro, no.10, Yogyakarta"<<endl;
	keluaran<<"nama pelanggan : "<<nama_pelanggan<<endl;
	keluaran<<"harga bayar    : "<<bayar<<endl;
	keluaran<<"kembalian      : "<<bayar-total<<endl;
	keluaran<<"Waktu : " <<tm;
	keluaran<<"TERIMA KASIH  "<<endl;
}
