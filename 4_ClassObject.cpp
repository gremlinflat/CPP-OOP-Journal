#include <iostream>

using namespace std;

class Mahasiswa{
    //public, private, protected
    public:
        string nama;
        string nim;
        string jurusan;
        float ipk;
};



int main(){
    Mahasiswa data1;
    cin >> data1.nama;
    cout << data1.nama;
    cin.get();
    return 0;
}
