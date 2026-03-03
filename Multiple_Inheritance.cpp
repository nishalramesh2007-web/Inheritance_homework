#include <iostream>
using namespace std;

class Flyable {
public:
    void fly() {
        cout << "Can fly." << endl;
    }
};

class Swimmable {
public:
    void swim() {
        cout << "Can swim." << endl;
    }
};

class Duck : public Flyable, public Swimmable {
public:
    void quack() {
        cout << "Duck quacks." << endl;
    }
};

int main() {
    Duck duck;
    duck.fly();
    duck.swim();
    duck.quack();
    return 0;
}
