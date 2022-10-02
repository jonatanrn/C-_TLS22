#include<iostream>

using namespace std;

int main () {
    int i = 1;
    long long a, b;
    cout << "program pengghitung pengeluaran harian" << endl;
    cout << "sistem akan menghitung akumulasi pengeluaran anda";


    while (i = 1) {
        cout << "masukan pengeluaran anda:\n";
        cin >> b;
        a = a + b;
        cout << "inilah akumulasi pengeluaran anda: \n Rp" << a << endl;
        cout << "\nmasukan 1 untuk melanjutkan, masukan 0 untuk mengakhiri" << endl;
        cin >> i;
        if (i == 0) 
            break;
    }
return 0;    
}