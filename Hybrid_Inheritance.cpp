#include <iostream>
using namespace std;

class Engine {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

class Wheels {
public:
    void rotateWheels() {
        cout << "Wheels rotating." << endl;
    }
};

class Electric : public Engine {
public:
    void chargeBattery() {
        cout << "Battery charging." << endl;
    }
};

class Car : public Electric, public Wheels {
public:
    void drive() {
        cout << "Car driving." << endl;
    }
};

int main() {
    Car car;
    car.startEngine();
    car.chargeBattery();
    car.rotateWheels();
    car.drive();
    return 0;
}
