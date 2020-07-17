#include <iostream>

using namespace std;

class user{

    public:
        string firstName;
        string lastName;

        void talk(string okay){
            cout<<okay;
        }

};

class Teacher : public user
{
    public:
        string classTeached;
};


int main(){
    Teacher a1;
    a1.talk("bitch");
    return 0;
}
