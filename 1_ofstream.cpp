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
    
    myFile.open("data.txt", _S_app);
    cout<<"apa";
    myFile << "\napaan dih2";
    myFile.close();

    cin.get();
    return 0;
}
