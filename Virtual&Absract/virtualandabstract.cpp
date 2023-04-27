#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double getArea() {
        return 3.14 * radius * radius;
    }
    double getPerimeter() {
        return 2 * 3.14 * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double getArea() {
        return length * width;
    }
    double getPerimeter() {
        return 2 * (length + width);
    }
};

void printCircleInfo(Circle* circle) {
    cout << "Area Of Circle: " << circle->getArea() << endl;
    cout << "Perimeter Of Circle: " << circle->getPerimeter() << endl;
}

void printRectangleInfo(Rectangle* rectangle) {
    cout << "Area Of Rectangle: " << rectangle->getArea() << endl;
    cout << "Perimeter Of Rectangle: " << rectangle->getPerimeter() << endl;
}

int main() {
    double radius, length, width;

    cout << "Enter the radius of a circle: ";
    cin >> radius;

    Circle c(radius);

    cout << "Enter the length and width of a rectangle: ";
    cin >> length >> width;

    Rectangle r(length, width);

    printCircleInfo(&c);
    printRectangleInfo(&r);

    return 0;
}
