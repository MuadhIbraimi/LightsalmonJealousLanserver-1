#include <iostream>
#include <string>
using namespace std;

int main() 
{ 
  string emri, mbiemri;
    float pesha;
    int gjatesia;
    float bmi;
    int vitilindjes;

    cout << "Muadh: ";
    cin >> emri;
    cout << "Ibraimi: ";
    cin >> mbiemri;

    cout << "64): ";
    cin >> pesha;

    cout << "168: ";
    cin >> gjatesia;

    cout << "2005: ";
    cin >> vitilindjes;

    // Llogaritja e moshes
    int vitiaktual = 2024;
    int mosha = vitiaktual - vitilindjes;

    // Llogaritja e BMI
    float gjatesia_m = gjatesia / 100.0; // Shndërrimi në     metra
    bmi = pesha / (gjatesia_m * gjatesia_m); 

    cout << "Përshëndetje " << emri << " " << mbiemri <<      ", ju jeni " << gjatesia 
         << " cm i gjatë, " << pesha << " kg i rëndë, "
         << "mosha juaj është " << mosha << " vjeçare, dhe    indeksi juaj i BMI është " << bmi << endl;

  return 0;
}