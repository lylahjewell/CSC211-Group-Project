#include "lineType.h"
#include <iostream>
#include <cmath>

using namespace std;

lineType::lineType() {
    a = 1;
    b = 1;
    c = 0;
}

lineType::lineType(double A, double B, double C) {
    a = A;
    b = B;
    c = C;
}

double lineType::slope() const {
    if (b == 0) {
        return INFINITY;
    }
    return -a / b;
}

bool lineType::isEqual(const lineType& other) const {
    double det = a * other.b - b * other.a;
    double det2 = a * other.c - c * other.a;
    double det3 = b * other.c - c * other.b;

    return (fabs(det) < 1e-9 &&
            fabs(det2) < 1e-9 &&
            fabs(det3) < 1e-9);
}

bool lineType::isParallel(const lineType& other) const {
    return fabs(a * other.b - other.a * b) < 1e-12;
}

bool lineType::isPerpendicular(const lineType& other) const {
    if (b == 0 && other.a == 0) return true;
    if (a == 0 && other.b == 0) return true;

    double m1 = slope();
    double m2 = other.slope();

    if (!isfinite(m1) || !isfinite(m2)) return false;

    return fabs(m1 * m2 + 1) < 1e-9;
}

pointType lineType::intersection(const lineType& other) const {
    pointType p;

    double det = a * other.b - other.a * b;

    if (fabs(det) < 1e-12) {
        p.valid = false;
        return p;
    }

    p.x = (c * other.b - other.c * b) / det;
    p.y = (a * other.c - other.a * c) / det;
    p.valid = true;

    return p;
}

void lineType::print() const {
    cout << a << "x + " << b << "y = " << c << endl;
}