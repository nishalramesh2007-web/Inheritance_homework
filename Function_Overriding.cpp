#include <iostream>
using namespace std;

class Shape {
public:
    
    void draw() {
        cout << "Drawing a generic shape" << endl;
    }
    
    virtual void area() {  
        cout << "Calculating area of generic shape" << endl;
    }
};

class Circle : public Shape {
public:
  
    void draw() {
        cout << "Drawing a circle" << endl;
    }
    
   
    void area() override {
        cout << "Circle area = pi*r²" << endl;
    }
};

class Rectangle : public Shape {
public:
        void draw() {
        cout << "Drawing a rectangle" << endl;
    }
    
       void area() override {
        cout << "Rectangle area = length × width" << endl;
    }
};

int main() {
    Shape * shapes[3];
    
    Circle circle;
    Rectangle rect;
    Shape generic;
    
    shapes[0] = &circle;
    shapes[1] = &rect;
    shapes[2] = &generic;
    
    cout << "Without virtual (compile-time binding):" << endl;
    for(int i = 0; i < 3; i++) {
        shapes[i]->draw();     }
    
    cout << "\nWith virtual (runtime binding):" << endl;
    for(int i = 0; i < 3; i++) {
        shapes[i]->area();  
    }
    
    return 0;
}
