using namespace std;
class Proses {
public:
  void getData() {
    bool dosenA = true, mk1 = true, mk2 = true, mk3 = true,
          nilai1 = true, nilai2 = true,
         nilai3 = true;
    ambil_data.open("data/input.txt");
    while (!ambil_data.eof()) {
      if (dosenA == true) {
        ambil_data >> dosen;
        dosenA = false;
      } else if (mk1 == true) {
        ambil_data >> mk[0];
        mk1 = false;
      } else if (mk2 == true) {
        ambil_data >> mk[1];
        mk2 = false;
      } else if (mk3 == true) {
        ambil_data >> mk[2];
        mk3 = false;
      }  else if (nilai1 == true) {
        ambil_data >> nilai[0];
        nilai1 = false;
      } else if (nilai2 == true) {
        ambil_data >> nilai[1];
        nilai2 = false;
      } else if (nilai3 == true) {
        ambil_data >> nilai[2];
        nilai3 = false;
      } 
    }
    ambil_data.close();
  }
  void simpan() {
    for (int i = 0; i < 3; i++) {
      jumlah += nilai[i];
    }
    float rata = jumlah / 3; 
    max = nilai[0];
    min = nilai[0];
    for (int i = 1; i < 3; i++) {
      if (nilai[i] > max) {
        max = nilai[i];
      }
      if (nilai[i] < min) {
        min = nilai[i];
      }
    }
    tulis_data.open("data/proses.txt");
    tulis_data << dosen << endl;
    for (int i = 0; i < 3; i++) {
      tulis_data << mk[i] << endl;
    }
    for (int i = 0; i < 3; i++) {
      tulis_data << nilai[i] << endl;
    }
    tulis_data << max << endl;
    tulis_data << min << endl;
    tulis_data << rata;
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  string dosen, mk[3];
  int nilai[3], max, min, jumlah = 0;
};