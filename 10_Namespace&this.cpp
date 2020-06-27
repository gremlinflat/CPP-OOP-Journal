#include <iostream>
#include <string>
using namespace std;

class player{
    public:
        string name;
        int a, power;
        //constructor
        player(const char* name, int a, int power){
            setname(name);
            setpower(power);
            setHealth(a);
            cout<< "Player "<< this->name <<endl;
            cout<< "power "<< player::power <<endl;
            cout<< "Health "<< player::a <<endl;            
        }

        void setHealth(int a){
            //"this" refer to pointer location or replacement for namespace player::
            //then the arrow operator
            this->a = a;
        }
        void setname(string name){
            this->name = name;
        }
        void setpower(int);//prototype
};

void player::setpower(int power){
      this->power = power;
}
namespace anjir{
    void kasihgoceng(int a){
        cout << "Nih Rp. " << a*5000;
    }
}
int main(){
    player manjing("ucup", 100, 10);
    anjir::kasihgoceng(1);
    return 0;
}
