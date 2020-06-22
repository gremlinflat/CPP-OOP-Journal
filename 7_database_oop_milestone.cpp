#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa{
    //public, private, protected
    public:
        string nama;
        string nim;
        string jurusan;
        float ipk;

    //this is constructor
    Mahasiswa(string Inputname, string inputnim, string inputjurusan){
        Mahasiswa::nama = Inputname; //the nama located in Mahasiswa object, its using namespace
        Mahasiswa::nim = inputnim;
        Mahasiswa::jurusan = inputjurusan;
    }

    //this is method
    string makeitstring(){
        return ("\n" + nama + " " + nim + " " + jurusan + " "); 
    }
};

class Dbase{
    public:
        ifstream in;
        ofstream out;
        string filename;
        
        Dbase(const char* filename){
            Dbase::filename = filename;
        }

        void save(Mahasiswa sate){
            //opening new file with appending mode
            Dbase::out.open(Dbase::filename, ios::app);

            Dbase::out << sate.makeitstring();

            Dbase::out.close();
        }

        void showAll(){
            Dbase::in.open(Dbase::filename, ios::in);
            string name, nim, major;
            int index=1;

            while (!Dbase::in.eof()){
                Dbase::in >> name;
                Dbase::in >> nim;
                Dbase::in >> major;

                cout<< index++ << "\t";
                cout<< name << "\t";
                cout<< nim << "\t";
                cout<< major<<endl;
            }

            Dbase::in.close();
            
        }
};

int main(){
    Dbase database = Dbase("data.txt");
    //showing all data base
    database.showAll();
    string name, nim, major;
    cout<<"DATABASE"<<endl;
    cout<<"NAME : "; 
    getline(cin, name );
    cout<<"NIM : "; 
    getline(cin, nim );
    cout<<"MAJOR : "; 
    getline(cin, major );
    
    
    Mahasiswa data1 = Mahasiswa(name,nim,major);
    

    //save to database
    database.save(data1);

    //showing all data base
    database.showAll();

    return 0;
}

//then what is constructor?
//the first method when the object created

//what is method?
// its sub program inside class