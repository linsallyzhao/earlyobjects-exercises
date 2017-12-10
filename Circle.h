#ifndef CIRCLE_H
#define CIRCLE_H
#include <cmath>

class Circle {
private:
    double radius;
    int centerX, centerY;

public:
    Circle() {
        radius = 1.0;
        centerX = centerY = 0;
    }

    Circle(double r) {
        radius = r;
        centerX = centerY = 0;
    }

    Circle(double r, int x, int y) {
        radius = r;
        centerX = x;
        centerY = y;
    }

    void setRadius(double r) {
        radius = r;
    }

    int getXcoord() {
        return centerX;
    }

    int getYcoord() {
        return centerY;
    }

    double findArea() {
        return 3.14 * pow(radius, 2);
    }
};
#endif



