#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

class Car : public Vehicle {
public:
    void accelerate() {
        cout << "Car accelerating." << endl;
    }
};

class SportsCar : public Car {
public:
    void turbo() {
        cout << "Turbo boost activated." << endl;
    }
};

int main() {
    SportsCar sc;
    sc.start();        
   sc.accelerate();    
   sc.turbo();
    return 0;
}
