#include<iostream>
using namespace std;

class Player{         // blueprint/Structure
    public:     // to access outside the class
    int score;
    int health;
};

int main(){

    Player Mukesh;   // object/instance/Real world entity
    Mukesh.health = 100;
    Mukesh.score = 120;

    Player ok;
    ok.health = 120;
    ok.score = 100;

    cout<<Mukesh.health<<endl;
    cout<<Mukesh.score<<endl;

    cout<<ok.health<<endl;
    cout<<ok.score<<endl;
}