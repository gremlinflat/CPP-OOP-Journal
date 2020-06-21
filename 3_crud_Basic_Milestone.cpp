#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

struct student{
    int pk; //primary key
    string NIM;
    string name;
    string major;
};

void writeDatabase(fstream &database, int position, student &inputStudent){
    database.seekp( (position-1) sizeof(inputStudent) , ios::beg);
    database.write(reinterpret_cast<char*>(&inputStudent), sizeof(inputStudent));
}

void addDatabase(fstream &database){
    student inputStudent; // creating data type from struct
    inputStudent.pk = 1;
    cout<< "Name : ";
    getline(cin, inputStudent.name);
    cout<< "NIM : ";
    getline(cin, inputStudent.NIM);
    cout<< "Major : ";
    getline(cin, inputStudent.major);

    writeDatabase(database, position, inputStudent);
}
int getMenu();
void checkDatabase(fstream &data);

int main(){
    
    fstream database;

    checkDatabase(database); //checking database and opening data base

    int pilihan = getMenu();
    char is_continue;

    enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};//enum array
    
    while (pilihan != FINISH){//if its not finished end

        switch (pilihan){
        case CREATE:
            cout << "CREATE A NEW DATA"<<endl;
            addDatabase(database);
            break;
        case READ:
            
            break;
        case UPDATE:
            
            break;
        case DELETE:
            
            break;
        default:
            cout << "YOUR OPTION IS INVALID";
            break;
        }

        cout<<" continue? (y/n) : ";
        std::cin>> is_continue; //asking for confirmation

        if(is_continue=='y'){
            pilihan = getMenu(); //reshow menu and asking for input
        }
        if(is_continue=='n'){
            break; //exit the loop ending program
        }

    }

    return 0;
}


int getMenu(){
    int input;
    system("cls"); //clearing screen
    cout << "\nMilestone project CRUD" <<endl;
    cout << "========================"<<endl;
    cout << "1. CREATE NEW DATA" <<endl;
    cout << "2. READ ENTIRE DATA TABLE" <<endl;
    cout << "3. UPDATE DATA" <<endl;
    cout << "4. DELETE DATA" <<endl;
    cout << "5. CLOSE " <<endl;
    cout << "========================"<<endl;
    cout << "Option [1-5] : ";
    
    std::cin>>input;
    cin.ignore(1000, '\n');//flushing the input after enter
    return input;
}

void checkDatabase(fstream &database){
    database.open("data.bin", ios::out | ios::in | ios::binary); //opening database if it exist

    if(database.is_open()){
        cout << "Database found"<<endl;
    }else{
        cout << "Database not found, Creating new database"<<endl;
        database.close(); // closing database and create new
        database.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);//opening database if it doesnt exist and creating new file
    }
}