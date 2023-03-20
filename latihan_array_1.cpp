#include <iostream>
#include <array>

using namespace std;

int main()
{   

    //################################  Latihann 1 ##############################

    // format array = array < typedata , jumlah array > nama array
    array < int , 3 > umur;
    array < string , 3 > Nama;

    cout << "Umur Siswa SD " << endl;
    for ( int i = 1; i < umur.size(); i++)
    {
        cout << "Siswa ke- " << i << endl;
        cout << "Masukkan Nama Siswa : "; cin >> Nama[i];
        cout << "Masukkan umur : ";       cin >> umur[i];
        cout << endl;
    }

    cout << "Tabel Umur" << endl;
    cout << "\tNo" << "\tNama" << "\tUmur" << endl;
    for (int x = 1; x < umur.size(); x++)
    {
        // cout << "Umur Siswa ke " << "[" << x << "]";
        // cout << " di SD harapan : " << umur[x] <<endl ;
        cout << "\t" << x << "\t";
        cout << Nama[x] << "\t" << umur[x] << endl;
    }

    // Penjumlahan NIlai di dalam array 
    int jumlah = 0;
    for (int z = 1 ; z < umur.size(); z++){
        jumlah = jumlah + umur[z];
    }
    cout << "Jumlah total umur di dalam SD : " << jumlah << endl << endl;

    //Memory alamat Array  
    for (int y = 1; y < umur.size(); y++){
        umur[y]=y;
        cout << "Memory Array umur : " << &umur << endl;
        cout << "Memory Array Nama : " << &Nama << endl;
    }


    //################################  Latihann 1 ##############################





    return 0;
}
