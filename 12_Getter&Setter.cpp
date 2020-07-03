#include <iostream>
#include <string>

using namespace std;

class player{
    private:
        int health = 100;
        int exp = 0;
        string name;
        int power = 10;
    
    public:
        player(string name){
            this->name=name;
        }
        
        void getInfo(){//getter 
            std::cout<<"Name   : "<< name <<std::endl;
            std::cout<<"Health : "<< health <<std::endl;
            std::cout<<"Power  : "<< power <<std::endl;
            std::cout<<"Exp    : "<< exp <<std::endl;
        } 

        //setter
        void addExp(int a){
            this->exp += a;
            std::cout<< "You got exp "<< a;
        }        
        void heal(int a){
            this->health += a;
            std::cout<< "Youre healing "<< a << " Points";
        }        
        void bleed(int a){
            this->health -= a;
            std::cout<< "Youre bleeding "<< a << " Points";
        }        
        void addPower(int a){
            this->power += a;
            std::cout<< "Youve got power up "<< a << " Points";
        }        
        void decPower(int a){
            this->power -= a;
            std::cout<< "Youre getting weak "<< a << " Points";
        }        

};

int main(){
    player player1("UDIN");
    player1.getInfo();
    player1.addExp(69);
    player1.bleed(69);
    player1.heal(100);
    player1.decPower(69);
    player1.getInfo();
    return 0;
}
