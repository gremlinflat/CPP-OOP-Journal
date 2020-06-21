#include <iostream>
#include <fstream> //offstream, ifstream, fstream

using namespace std;

int main()
{
    ifstream myFile; // object dengan class ifstream
    string data;
    string dummybuffer;
    myFile.open("data.txt");

    //myFile >> data; //assign first word on document to variable (ended with space)
    getline(myFile, dummybuffer);
    data.append(dummybuffer);
   
    getline(myFile, dummybuffer);
    data.append(dummybuffer);
   
    getline(myFile, dummybuffer);
    data.append(dummybuffer);
    
    getline(myFile, dummybuffer);
    data.append(dummybuffer);


    cout << data;

    cin.get();
    return 0;
}
