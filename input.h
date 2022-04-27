using namespace std;
class Input {
public:
  void inputkan() {
    cout << "Masukkan Nama Dosen : ";
    cin >> dosen;
    cout << "Masukkan Matakuliah dan nilai di bawah ini" << endl;
    for (int i = 0; i < 3; i++) {
      cout << "Matakuliah : ";
      cin.ignore();
      getline(cin, mk[i]);
      cout << "Nilai\t : ";
      cin >> nilai[i];
    }
  }
  void simpan(){
    tulis_data.open("data/input.txt");
    tulis_data << dosen << endl;
    for(int i = 0; i < 3; i++){
      tulis_data << mk[i] << endl;
    }
    for(int i = 0; i < 3; i++){
      if(i < 2){
        tulis_data << nilai[i] << endl;
      } else {
        tulis_data << nilai[i];
      }
    }
    tulis_data.close();
  }  

private:
  ofstream tulis_data;
  string dosen, mk[3];
  int nilai[3];
};