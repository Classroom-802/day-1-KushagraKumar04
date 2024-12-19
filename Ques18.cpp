#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;
};

class Rectangle : public Shape {
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double getArea() override {
        return length * breadth;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double getArea() override {
        return 3.14159 * radius * radius;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    double getArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    int type;
    cin >> type;

    if (type == 1) {
        double length, breadth;
        cin >> length >> breadth;
        Rectangle rect(length, breadth);
        cout << "The area of the rectangle is: " << rect.getArea() << endl;
    } else if (type == 2) {
        double radius;
        cin >> radius;
        Circle circle(radius);
        cout << "The area of the circle is: " << circle.getArea() << endl;
    } else if (type == 3) {
        double base, height;
        cin >> base >> height;
        Triangle triangle(base, height);
        cout << "The area of the triangle is: " << triangle.getArea() << endl;
    } else {
        cout << "Invalid shape type." << endl;
    }

    return 0;
}
