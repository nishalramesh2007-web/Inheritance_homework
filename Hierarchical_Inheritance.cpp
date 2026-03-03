#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing shape." << endl;
    }
};

class Circle : public Shape {
public:
    void roll() {
        cout << "Circle rolls." << endl;
    }
};

class Triangle : public Shape {
public:
    void rotate() {
        cout << "Triangle rotates." << endl;
    }
};

int main() {
    Circle c;
    Triangle t;
    
    c.draw();
    c.roll();
    
    t.draw();
    t.rotate();
    return 0;
}
