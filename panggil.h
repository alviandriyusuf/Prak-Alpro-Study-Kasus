using namespace std;
class panggil{
public:
void cetak(){
  string nm,pd,makul;
    long int nim;
    int a,mk,sks;
    int ts=0,tarif=120000;
    float diskon = 0.15;
    long int total;
    int jumlah;
  cout<<"daftar mata kuliah\n";
  cout<<"1. algoritma pemrograman\n";
  cout<<"2. matematika diskret\n";
  cout<<"3. pemrograman web\n";

    cout<<"----------------------------------------"<<endl;
    cout<<" Nama      : ";cin>>nm;
    cout<<" NIM       : ";cin>>nim;
    cout<<" Prodi     : ";cin>>pd;
    cout<<"----------------------------------------"<<endl;
    cout<<" Input Jumlah makul : ";cin>>mk                                                                                  ;
    cout<<"----------------------------------------"<<endl;

    for (a=0; a<mk; a++){
        cout<<" Matkul      : ";cin>>makul;
        cout<<" sks        : ";cin>>sks;
        ts+=sks;
    }
    total=(tarif*ts)/diskon;
    cout<<"----------------------------------------"<<endl;
    cout<<" Total SKS        : ";cout<<ts<<endl;
    cout<<" Total Tarif SKS  : ";cout<<total<<endl; 
	                                                                                                    
    cout<<"----------------------------------------"<<endl;
  }
};
