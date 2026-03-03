#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    virtual void display() {  
        cout << "Base class object" << endl;
    }
    
       virtual ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Derived1 : public Base {
public:
    void display() override {
        cout << "Derived1 object" << endl;
    }
    
    ~Derived1() {
        cout << "Derived1 destructor called" << endl;
    }
};

class Derived2 : public Base {
public:
    void display() override {
        cout << "Derived2 object" << endl;
    }
    
    ~Derived2() {
        cout << "Derived2 destructor called" << endl;
    }
};

int main() {
    Base* ptr1 = new Derived1();
    Base* ptr2 = new Derived2();
    
    ptr1->display(); 
    ptr2->display(); 
    
    delete ptr1;  
   delete ptr2;     
    return 0;
}
