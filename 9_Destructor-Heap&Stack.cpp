#include <iostream>
#include <string>
using namespace std;

class player{
    public:
        string name;
        
        //constructor
        player(const char* name){
            player::name = name;
            std::cout<< "Player "<< player::name << " Has been created."<<endl;
        }

        //destructor
        ~player(){
            std::cout<< "Player "<< player::name << " Has been deleted."<<endl;
        }
};


int main(){
    
    {
        //creating object to stack memory
        player stackplayer("StackPlayer");
        //beacause its stack, the object will be destructed when the bracket is closed
    }

    {
        //creating object to heap memory using new and saving as pointer location
        player* heapplayer = new player("HeapPlayer");
        
        //when the object on heap memory, we should manually delete the object even the bracket is closed
        delete heapplayer;
    }

    return 0;
}
