using namespace std;
class pointer{
public:
void data_mhs(){
  string nama[20];
  int nim[20],*y;
  cout<<"Program Menghitung jumlah mahasiswa pada lomba Parmatika\n";
cout<<"-------------------------------------------------------- \n";
int x,p;
cout<<"Masukan Jumlah Data Mahasiswa : ";
cin>>p;
for(int i=1;i<=p;i++)
{
 y=&nim[i];
 cout<<endl;
 cout<<"no : ";
 cin>>i;
    cout<<"Masukan Nama Mahasiswa : ";
    cin>>nama[i];
    cout<<"Masukan NIM Mahasiswa  : ";
    cin>>nim[i];
 cout<<endl;
}
cout<<endl;
cout<<"--------------------------------------------\n";
cout<<"No"<<"\t"<<"Nama"<<"\t\t"<<"NIM"<<"\t\t\t"<<"Alamat nim"<<endl;
cout<<"---------------------------------------------\n";
for( int i=1;i<=p;i++)
{
y=&nim[i];
cout<<i<<"\t"<<nama[i]<<"\t\t"<<nim[i]<<"\t\t"<<y<<"\t";
cout<<endl;
}
cout<<endl;
}
};