#include <iostream>
using namespace std;

int arr[20];                            // Membuat array dengan panjang data 20
int n;                                  // Membuat variabel inputan n 

void input() {   // Procedure Input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : ";                   // Membuat inputan jumlah element Array
        cin >> n;                                                       // Memanggil variabel inputan n

        if (n <= 20) {                                                 // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen. \n";   // Menamppilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                                                       // Membuat jarak per baris program
    cout << "======================" << endl;                           // Membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;


    for (int i = 0; i < n; i++)   //menggunakan perulangan for ntuk menyimpan data pada array
    {
        cout << "Data ke-" << (1 + 1) << ":"; // memasukan milai data n
        cin >> arr[i];
    }
}

void insertionsort() { //procedure insertionsort

    int temp;   // Membuat variabel data temporer atau penyimpanan sementara
    int j;      // Membuat variabel j sebagai penanda

   





}