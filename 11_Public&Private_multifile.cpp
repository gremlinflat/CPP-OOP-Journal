#include <iostream>
#include <string>
#include "11_methodfunction.cpp"
using namespace std;
int main(){
    student* anjing = new student("sapatuh");
    anjing->showpublic();
    student* byset = new student("guelah");
    byset->showprivate();
    
    return 0;
}
