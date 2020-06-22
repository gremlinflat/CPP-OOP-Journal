#include <iostream>
#include <fstream> //offstream, ifstream, fstream

using namespace std;

int main()
{
    ofstream myFile; // object dengan class ofstream
    
    //mode
    //ios::out = operasi output,
    //ios::app = menulis pada akhir baris
    //ios::trunc = membuat file jika tidak ada
    
    myFile.open("data.txt", ios:: );
    myFile << "\napaan dih2";
    myFile << "\nhayyu";
    myFile.close();

    cin.get();
    return 0;
}
void checkDatabase(fstream &database){
    database.open("data.bin", ios::out | ios::in); //opening database if it exist

    if(database.is_open()){
        cout << "Database found"<<endl;
    }else{
        cout << "Database not found, Creating new database"<<endl;
        database.close(); // closing database and create new
        database.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);//opening database if it doesnt exist and creating new file
    }
}