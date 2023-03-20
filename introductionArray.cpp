#include <iostream>
#include <array> //stabdar library array

using namespace std;

int main(){

    // array dengan standar library iostream
    int nilai [5];
    nilai[0]= 5;
    cout << nilai [0] <<endl ;
    cout << "memory : " << &nilai <<endl;

    //melihat ukuran Array
    cout << "ukuran array : " << sizeof(nilai) << "byte " <<endl;
    
    //melihat jumlah member array
    cout << "jumlah member : " << sizeof(nilai)/sizeof(int) <<endl;

//###########################################################################

    // membuat array dengan standar library array

    // format array = array < typedata , jumlah array > nama array

    array < int , 5 > biji;
    
    for (int i = 0; i < 5; i++){
        cout << endl;
        biji[i]=i;
        cout << "Memory Array : " << &biji[i] << "  , Isi Array : " << "[" << biji[i] << "]";
    }
    // melihat ukuran array
    cout << endl << "jumlah array : " << biji.size() << endl ;

    // melihat memory awal array
    cout << "Memory awal array : " << biji.begin() << endl;

    //melihat memory batas array
    cout << "Memory akhir array : " << biji.end() << endl;


    cin.get();
    return 0;
}
