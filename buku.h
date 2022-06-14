using namespace std;
class buku{
public:
void data_buku(){
  int n,brs,klm,tmp;
	int buku[24];
	int rak[24][24];
	int d=0;
	
	cout<<"Masukkan banyaknya bilangan : ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Buku ke-"<<i<<"= ";cin>>buku[i];
	}
	cout<<"Nomor buku sebelum di urutkan\n";
	for(int j=0;j<n;j++){
		cout<<buku[j]<<", ";
	}
	cout<<endl;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(buku[i]>buku[j]){
				tmp=buku[i];
				buku[i]=buku[j];
				buku[j]=tmp;
			}
		}
	}
	cout<<endl;
	cout<<"Nomor buku setelah diurutkan\n";
	for(int i=0;i<n;i++){
		cout<<buku[i]<<", ";
	}
		cout<<endl<<"\n";
	cout<<"Masukkan banyak kolom : ";cin>>klm;
	cout<<"Masukkan banyak baris : ";cin>>brs;
	
	for(int k=0;k<brs;k++){
		for(int l=0;l<klm;l++){
			rak[k][l]=buku[d];
			d++;
		}
	}
	cout<<endl;
	cout<<"Nomor buku setelah dimasukkan ke dalam rak"<<endl;
	for(int k=0;k<brs;k++){
		for(int l=0;l<klm;l++){
			cout<<rak[k][l]<<" ";
		}
		cout<<endl;
	}
}
};