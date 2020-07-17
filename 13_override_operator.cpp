#include <iostream>

using namespace std;

class coordinate{
    public:
        int x;
        int y;

        coordinate operator+ (coordinate pos){ //c2 is parameter
            coordinate new_post;
            new_post.x = x + pos.x;
            new_post.y = y + pos.y;
            return new_post;
        }
        bool operator == (coordinate pos){
            if(x == pos.x && y == pos.y){
                return true;
            }else{
                return false;
            }
        }
};

int main(){
    coordinate c1, c2;
    c1.x=3;
    c1.y=5;

    c2.x=3;
    c2.y=5;

    coordinate c3 = c1 + c2;
    cout<< "C3 = C1 + C2"<<endl;
    cout<< "C3 X = "<<c3.x<<endl;
    cout<< "C3 Y =  "<<c3.y;
    
    if(c1==c2){
        cout<<"its same";
    }

    return 0;
}
