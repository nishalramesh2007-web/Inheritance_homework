#include <iostream>
#include <string>
using namespace std;

class Shape {  
protected:
    string name;
    
public:
    Shape(string n) : name(n) {}
    
        virtual double area() = 0;
    
    
    virtual void display() {
        cout << "Shape: " << name << endl;
    }
    
   
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
    
public:
    Circle(string n, double r) : Shape(n), radius(r) {}
    
    // Must implement pure virtual function
    double area() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
    
public:
    Rectangle(string n, double l, double w) : Shape(n), length(l), width(w) {}
    
        double area() override {
        return length * width;
    }
};

int main() {
        
    Circle circle("Circle", 5.0);
    Rectangle rect("Rectangle", 4.0, 6.0);
    
    Shape* shapes[] = { &circle, &rect };
    
    for(int i = 0; i < 2; i++) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->area() << endl << endl;
    }
    
    return 0;
}
