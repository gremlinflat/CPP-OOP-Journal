#include <iostream>
#include "11_prototypeclass.h"

    student::student(const char* name){
        this->namepublic = name;
        this->nameprivate = name;
    
    }; //prototype of constructor
    
    void student::showpublic(){
        std::cout << this->namepublic;
    };

    void student::showprivate(){
        std::cout << this->nameprivate;
    };