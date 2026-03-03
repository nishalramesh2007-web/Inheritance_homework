#include <iostream>
using namespace std;

class Animal {
public:
   
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
    
       virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow!" << endl;
    }
};

int main() {
   
    Dog dog;
    Cat cat;
    
    
    Animal* ptr;
    
    ptr = &dog;
    ptr->sound();     
   
    ptr = &cat;
    ptr->sound();      
    return 0;
}
