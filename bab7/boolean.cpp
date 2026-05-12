#include <iostream>
using namespace std;

int main(){
    int umur;
    bool status;

    cout << "Masukkan umur anda: ";
    cin>>umur;

    status=(umur>=17);
    if (status){
        cout<<"Anda layak"<<endl;
    }
    else{
        cout<<"Anda tak layak"<<endl;
    }
    return 0;
}