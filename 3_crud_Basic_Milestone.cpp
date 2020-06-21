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

int main()
{

    cout << getOption() << endl;

    cin.get();
    return 0;
}
