#include <iostream>
using namespace std;

int main(){
    float c,r,f,k;

    cout << "Masukkan suhu dalam celcius: ";
    cin >> c;
    cout << endl;

    r = (4.0/5.0)*c;
    f= (9/5)*c+32;
    k = c+273.15;

    cout << "Suhu dalam Reamur: "<< r << endl;
    cout << "Suhu dalam Fahrenheit: "<<f<<endl;
    cout << "Suhu dalam Kelvin: "<<k<<endl;

    return 0;
}