#include<iostream>

using namespace std;

class Bike{
    public:
    static int noOfBikes;  // now the blueprint/class too has a variable which gets called only once when the first object is compiled
    int tyreSize;
    int engineSize;

    //Bike(){}    // Default Constructor

    Bike(int tyreSize, int engineSize){  // Parameterized Contructors
        cout<<"Contructor has been called"<<endl;

        this->tyreSize = tyreSize;
        this->engineSize = engineSize;

    }

    // ~Bike(){   // Destructor gets called when object goes out of scope
    //     cout<<"Destructor gets called"<<endl;
    // }
};

int main(){

    Bike tvs(12, 345);  // Object Creation  will lead to calling of constructor
    Bike heroHonda(23, 567);
    bool flag = true;
    // if(flag==true){   // To understand how destructors gets called
    //     Bike bmw(12,450);
    //     cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    // }
    Bike royalEnefield(34, 450);
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<heroHonda.tyreSize<<" "<<heroHonda.engineSize<<endl;
    cout<<royalEnefield.tyreSize<<" "<<royalEnefield.engineSize<<endl;
}