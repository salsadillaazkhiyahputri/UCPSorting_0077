/*
1. Dengan cara mengambil dan memilah sebuah elemen data menjadi 2 bagian,menempatkannya pada posisi yang benar diantara elemen elemen yang sudah dan yang belum diurutkan.
2. Dengan cara mencari nilai elemen terkecil yang belum terurut dan menukarnya dengan elemen pertama yang belum terurut dan terus bandingkan sampai urut dan tidak ada pertukaran data lagi.
3. Menggunakan Insertion Sort Ketika data tersebut sudah tersusun dengan urut. 
4. 
*/



#include <iostream>
using namespace std;

int Salsa[77];
int n;

void input() { // Prosedur untuk input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array (maksimal jumlah 77): ";
        cin >> n;

        if (n <= 77) // jika n kurang dari / sama dengan 77
            break; // keluar dari loop
        else // jika n lebih dari 77
            cout << "\nArray hanya dapat mempunyai maksimal 77 elemen.\n";
    }

    cout << endl;
    cout << "====================" << endl;
    cout << "Masukkan elemen " << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + i) << "; ";
        cin >> Salsa[i];
    }
}

void SelectionSort() {
    int i, j, pass;

    for (i = 0; i < n - 1; i++) {
        pass = i;
        for (j = i + 1; j < n; j++) {
            if (Salsa[j] < Salsa[pass])
                pass = j;
        }

        int temp = Salsa[pass];
        Salsa[pass] = Salsa[i];
        Salsa[i] = temp;
    }
}

void display() {
    cout << endl;
    cout << "===============================" << endl;
    cout << "Elemen array yang telah tersusun" << endl;
    cout << "===============================" << endl;
    cout << endl;

    for (int j = 0; j < n; j++) {
        cout << Salsa[j];
        if (j < n - 1)
            cout << "-->";
    }

    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main() {
    input();
    SelectionSort();
    display();
    system("pause");
    return 0;
}
