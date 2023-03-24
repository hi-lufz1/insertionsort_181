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

    for (int i = 1; i < n; i++) {                                   // 1. Looping dengan i dimulai dari 1 hingga n-1
 
        temp = arr[i];                                              // 2. Simpan nilai arr[i] ke variabel sementara temp

        j = i - 1;                                                 // 3. Setting nilai j sama dengan i-1;

        while (j >= 0 && arr[j] > temp)                            //4. Looping while dimana nilai j lebih besar sama dengan 0 dan
                                                                   // arr[j] lebih besar daripada temp
        {
            arr[j + 1] = arr[j];                                  //4a. simpan arr[j] ke dalam variabel arr[j+]
            j--;                                                  //4b. decrement nilai j by 1
        }
    
    
    
    
    
    }