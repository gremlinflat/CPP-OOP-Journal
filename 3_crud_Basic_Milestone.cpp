#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

int getMenu();

int main(){
    
    fstream database;

    database.open("data.bin", ios::out | ios::in | ios::binary);

    if(database.is_open()){
        cout << "Database found"<<endl;
    }else{
        cout << "Database not found, Creating new database"<<endl;
        database.close();
        database.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    }

    int pilihan = getMenu();
    char is_continue;

    enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};
    
    while (pilihan != FINISH){

        switch (pilihan){
        case CREATE:
            
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
        std::cin>> is_continue;
        if(is_continue=='y'){
            pilihan = getMenu();
        }
        if(is_continue=='n'){
            break;
        }else{
            cout<<"INVALID OPTION!!";
        }

    }
    

    std::cin.get();
    return 0;
}


int getMenu(){
    int input;
    system("cls");
    cout << "\nMilestone project CRUD" <<endl;
    cout << "========================"<<endl;
    cout << "1. APPEND NEW DATA" <<endl;
    cout << "2. SHOW ENTIRE DATA TABLE" <<endl;
    cout << "3. CHANGE DATA" <<endl;
    cout << "4. DELETE DATA" <<endl;
    cout << "5. CLOSE " <<endl;
    cout << "========================"<<endl;
    cout << "Option [1-5] : ";
    
    std::cin>>input;
    return input;
}