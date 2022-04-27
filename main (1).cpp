#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"
using namespace std;

int main() {
  Input input;
  input.inputkan();
  input.simpan();

  Proses proses;
  proses.getData();
  proses.simpan();
  
  Output output;
  output.getData();
  output.cetak();
}