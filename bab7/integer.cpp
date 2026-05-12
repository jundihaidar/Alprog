#include <iostream>
using namespace std;

int main(){
    int a,b; //a dan b adalah integer
    cout<<"masukkan dua bilangan bulat: ";
    cin>>a>>b; // input teks ke a dan b

    int sum = a+b;
    cout<<"Hasil penjumlahan: "<<sum<<endl; //endl untuk baris baru (end line)

    return 0;
}
/* 
g++ = compiler
integer.cpp = namaFIle
-o = outputnya adalah
integer. exe = outputnya
.\integer.exe = jalankan integer.exe
Jadi yang ditulis di terminal:
g++ integer.cpp -o integer.exe
.\integer.exe
 */