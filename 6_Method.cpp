#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    //public, private, protected
    public:
        string nama;
        string nim;
        string jurusan;
        float ipk;

    //this is constructor
    Mahasiswa(string Inputname, string inputnim, string inputjurusan, float InputIPK){
        Mahasiswa::nama = Inputname; //the nama located in Mahasiswa object, its using namespace
        Mahasiswa::nim = inputnim;
        Mahasiswa::jurusan = inputjurusan;
        Mahasiswa::ipk = InputIPK;
    }

    //this is method w/o return and param
    void showData(){
        cout << Mahasiswa::nama<<endl;
        cout << Mahasiswa::nim<<endl;
        cout << Mahasiswa::jurusan<<endl;
        cout << Mahasiswa::ipk<<endl;
    }
};

int main(){
    Mahasiswa data1 = Mahasiswa("reo","13214215","Tambang",4.0);
    Mahasiswa data2 = Mahasiswa("tampu","13215","Tpnsf",4.0);
    
    data1.showData();

    return 0;
}

//then what is constructor?
//the first method when the object created

//what is method?
// its sub program inside class