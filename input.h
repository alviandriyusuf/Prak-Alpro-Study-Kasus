using namespace std;
class Input{
	public:
		void cetak(){
			cout<<"Rumah Makan A3 \n";
			cout<<"Menu Yang Tersedia : \n";
			cout << " [1] Ayam Geprek  Rp 21.000\n";
			cout << " [2] Ayam Goreng  Rp 17.000\n";
			cout << " [3] Udang Goreng Rp 19.000\n";
			cout << " [4] Cumi Goreng  Rp 20.000\n";
			cout << " [5] Ayam Bakar   Rp 25.000\n ";
			cout << "Nama Pemesan : "; cin>>nama_pmsn;
			cout << " Silahkan Pilih Menu Makanan : ";cin>>menu_plh;
			if(menu_plh==1){
				plhn= " Ayam Geprek";
        cout<<plhn<<endl;
				cout << " Harga : Rp 21000\n";
				cout << " Jumlah : ";
				cin >> jumlah;
				cout << " Jarak Rumah (km): ";
				cin >> jarak;
				total1 = jumlah*21000;
			}
			else if(menu_plh==2){
				plhn=" Ayam Goreng";
        cout<<plhn<<endl;
				cout << " Harga : Rp 17000\n";
				cout << " Jumlah : ";
				cin >> jumlah;
				cout << " Jarak Rumah (km): ";
				cin >> jarak;
				total1 = jumlah*17000;
			}
			else if(menu_plh==3){
			plhn = "Udang Goreng";
        cout<<plhn<<endl;
			cout << " Harga : Rp 19000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*19000;
			}
			else if(menu_plh==4){
				plhn ="Cumi Goreng";
			  cout <<plhn<<endl;
				cout << " Harga : Rp 20000\n";
				cout << " Jumlah : ";
				cin >> jumlah;
				cout << " Jarak Rumah (km): ";
				cin >> jarak;
				total1 = jumlah*20000;
			}
			
      else if(menu_plh==5){
      plhn ="Ayam Bakar";
			cout <<plhn<<endl;
			cout << " Harga : Rp 25000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*25000;
			}
	
		}
		void tofile(){
			tulis_data.open("../pra_data/input.txt");
			tulis_data<<nama_pmsn<<endl;
			tulis_data<<plhn<<endl;
      tulis_data<<jumlah<<endl;
      tulis_data<<jarak<<endl;
			tulis_data.close();	
		}
			private :
			ofstream tulis_data;
			int menu_plh,jumlah,jarak,total1;
			string nama_pmsn;
      string plhn;
};