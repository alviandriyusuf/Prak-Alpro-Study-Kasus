using namespace std;
class Output {
public:
  void cetak() {
    cout << "Nama Dosen : " << data[0] << endl;
    cout << "Mata Kuliah dan nilai :\n"
      << data[1] << " = " << data[4] << "\n"
         << data[2] << " = " << data[5] << "\n"
         << data[3] << " = " << data[6] << endl;
    cout << "Nilai Max : " << data[7] << endl;
    cout << "Nilai Min : " << data[8] << endl;
    cout << "Rata-rata : " << data[9] << endl;
  }
  void getData() {
    ambil_data.open("data/proses.txt");
    while (!ambil_data.eof()) {
      ambil_data >> data[i];
      i += 1;
    }
    ambil_data.close();
  }

private:
  ifstream ambil_data;
  string data[100];
  int i = 0;
};