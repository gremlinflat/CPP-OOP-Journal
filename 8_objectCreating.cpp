#include <iostream>

using namespace std;
class babyconstruct{
    public:
        string name;
        
        babyconstruct(const char* name){
            babyconstruct::name = name;
        }
};


int main(){
    babyconstruct object1("hayyuk");

    babyconstruct object2 = babyconstruct("apatu");
    
    babyconstruct* object3 = new babyconstruct("manyun");
    (*object3).show();
//or
    object3->show();

    babyconstruct* object3 = babyconstruct("manyun");
    

    return 0;
}
