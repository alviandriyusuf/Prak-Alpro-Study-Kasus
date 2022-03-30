#include<iostream>
#include<fstream>
using namespace std;
int main(){
	awal:
	ofstream cetak;
	cetak.open ("cetak.txt");
	int jumlah, total, total1, diskon, menu, x,porsi[10],pesanan;
	float jarak;
	string nama;
	char a, b, pilihan1, lagi;
		cout << "           RUMAH MAKAN A3 \n ";
		cout << " Masa Pandemi hanya menerima orderan Delivery\n";
		cout << " MENU : \n";
		cout << " [1] Ayam Geprek  Rp 21.000\n";
		cout << " [2] Ayam Goreng  Rp 17.000\n";
		cout << " [3] Udang Goreng Rp 19.000\n";
		cout << " [4] Cumi Goreng  Rp 20.000\n";
		cout << " [5] Ayam Bakar   Rp 25.000\n ";
		cout << " Menu Pilihan : ";
		cin >> menu;
		cout<<"Nama Pemesan  : ";cin>>nama;
		cout<<"Banyak pesanan: ";cin>>pesanan;
		for(a=1;a<=menu;++a){
			cout<<"pesanan ke "<<a<<endl;
			cout<<"Jumlah pesan : ";cin>>porsi[a];
		}
			if(menu == 1){
			cout << " Ayam Geprek\n";
			cout << " Harga : Rp 21000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*21000;
			if (jarak <= 3){
				total = jumlah*21000;
				cout << " Ongkir : 15000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
			if (jarak > 3){
				total = jumlah*21000;
				cout << " Ongkir : 25000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
		}
		else if(menu == 2){
			cout << " Ayam Goreng\n";
			cout << " Harga : Rp 17000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*17000;
			if (jarak <= 3){
				total = jumlah*17000;
				cout << " Ongkir : 15000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000 ;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
			if (jarak > 3){
				total = jumlah*17000;
				cout << " Ongkir : 25000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
		}
		else if(menu == 3){
			cout << " Udang Goreng\n";
			cout << " Harga : Rp 19000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*19000;
			if (jarak <= 3){
				total = jumlah*19000;
				cout << " Ongkir : 15000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x =  total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
			if (jarak > 3){
				total = jumlah*19000;
				cout << " Ongkir : 25000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
		}
	
		else if(menu == 4){
			cout << " Cumi Goreng\n";
			cout << " Harga : Rp 20000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*20000;
			if (jarak <= 3){
				total = jumlah*20000;
				cout << " Ongkir : 15000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
			if (jarak > 3){
				total = jumlah*20000;
				cout << " Ongkir : 25000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
		}
		else if(menu == 5){
			cout << " Ayam Bakar\n";
			cout << " Harga : Rp 25000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*25000;
			if (jarak <= 3){
				total = jumlah*25000;
				cout << " Ongkir : 15000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
			if (jarak > 3){
				total = jumlah*25000;
				cout << " Ongkir : 25000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					 x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000; 
					cout << " Total : " << x << endl;
				}
				else{
					cout<<"Inputkan Data Lagi[Ya]/[Tidak]? jika iya tekan y/Y: ";cin>>lagi;
		goto awal;
				}
	}
}
		
			cetak << "    STRUK RUMAH MAKAN A3\n";
			cetak << " ===================================\n";
			cetak <<" nama : "<<nama<<endl;
			cetak << " Pesanan : " << menu << endl;
			cetak << " JUmlah  : " << jumlah << endl;
			cetak << " Total   : " << x << endl; 
			cetak << " ==================================\n";
			cetak.close();
		}
