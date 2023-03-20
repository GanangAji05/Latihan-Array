#include <iostream>
#include <array>

using namespace std;


int main (){
    // int jumlah ;
    // cout << "Masukkan jumlah : "; cin >> jumlah;
    array < int ,10> hasil;

    cout << "Program Grafik Array" << endl ;
    for ( int i = 0 ; i < hasil.size(); i++){
        cout << "Masukkan Nilai Mahasiswa ";
        if (i == 0){
            cout << " 0-9 : ";   
        }
        else {
            cout << i*10 << "-" << (i*10)+9 << ": "; 
        }
        cin >> hasil[i];
    }
    cout << endl;
    cout << " Grafik " << endl << endl;
    for ( int i = 0 ; i < hasil.size(); i++){
        if (i == 0){
            cout << " 0-9 : ";
        }
        else {
            cout << i*10 << "-" << (i*10)+9 << ": "; 
        }
        for ( int bintang = 0; bintang < hasil[i]; bintang ++ ){
            cout << "*";
        }
        cout << endl;
    }
    cin.get();
    return 0;
}