#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int getOption(){
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
    
    cin>>input;
    return input;
}

int main(){
    int pilihan = getOption();
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
        cin>> is_continue;
        if(is_continue=='y'){
            pilihan = getOption();
        }
        if(is_continue=='n'){
            break;
        }else{
            cout<<"INVALID OPTION!!";
        }

    }
    

    cin.get();
    return 0;
}
